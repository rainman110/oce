#include <TopoDS_Shape.hxx>
#include <IGESControl_Reader.hxx>

#include <OSD_File.hxx>
#include <OSD_Protection.hxx>
#include <TCollection_AsciiString.hxx>
#include <Message_PrinterOStream.hxx>
#include <Message_Messenger.hxx>
#include <Message.hxx>

#include <gtest/gtest.h>

#include "IGESImport_test_config.h"

static void readFile(Standard_CString aFileName, Standard_CString aLogFileName)
{
    Handle(Message_Printer) printer = new Message_PrinterOStream(aLogFileName, 0);
    Message::DefaultMessenger()->AddPrinter(printer);
    IGESControl_Reader Reader;
    int status = Reader.ReadFile(aFileName);
    ASSERT_EQ(status,IFSelect_RetDone);
    TopoDS_Shape tdsshape;
    if ( status == IFSelect_RetDone )
    {
        Reader.TransferRoots();
        Reader.PrintCheckTransfer(1, IFSelect_CountSummary);
        tdsshape = Reader.OneShape();
    }
    ASSERT_FALSE(tdsshape.IsNull());
    Message::DefaultMessenger()->RemovePrinter(printer);
}

static void compareLogFile(Standard_CString aFileName1, Standard_CString aFileName2)
{
    Standard_Integer bufferSize = 4000;
    TCollection_AsciiString Buffer1(bufferSize, 0);
    TCollection_AsciiString Buffer2(bufferSize, 0);

    OSD_File f1 = OSD_File(OSD_Path(aFileName1));
    OSD_File f2 = OSD_File(OSD_Path(aFileName2));
    OSD_Protection Protection( OSD_R, OSD_R, OSD_R, OSD_R );

    f1.Open(OSD_ReadOnly, Protection);
    f2.Open(OSD_ReadOnly, Protection);
    do {
        f1.Read(Buffer1, bufferSize);
        f2.Read(Buffer2, bufferSize);
        ASSERT_TRUE (Buffer1 == Buffer2);
        ASSERT_TRUE (f1.IsAtEnd() == f2.IsAtEnd());
    } while (!f1.IsAtEnd() && !f2.IsAtEnd());

    f1.Close();
    f2.Close();
}

TEST(IGESImportTestSuite, testImportIGES_1)
{
    readFile((Standard_CString) iges_file_1, "reader_1-C.log");
}

#ifdef LOCALE_FOR_TESTS
TEST(IGESImportTestSuite, testImportIGES_1L)
{
    Standard_CString oldLocale = std::setlocale(LC_ALL, LOCALE_FOR_TESTS);
    readFile((Standard_CString) iges_file_1, "reader_1-" LOCALE_FOR_TESTS ".log");
    std::setlocale(LC_ALL, oldLocale);
}
TEST(IGESImportTestSuite, testImportIGES_1D)
{
    compareLogFile("reader_1-C.log", "reader_1-" LOCALE_FOR_TESTS ".log");
}
#endif

int main(int argc, char **argv){
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
