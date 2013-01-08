#include <TopoDS_Shape.hxx>
#include <STEPControl_Reader.hxx>

#include <OSD_File.hxx>
#include <OSD_Protection.hxx>
#include <TCollection_AsciiString.hxx>
#include <Message_PrinterOStream.hxx>
#include <Message_Messenger.hxx>
#include <Message.hxx>

#include <gtest/gtest.h>

#include "STEPImport_test_config.h"

static void readFile(Standard_CString aFileName, Standard_CString aLogFileName)
{
    Handle(Message_Printer) printer = new Message_PrinterOStream(aLogFileName, 0);
    Message::DefaultMessenger()->AddPrinter(printer);
    STEPControl_Reader aReader;
    IFSelect_ReturnStatus status = aReader.ReadFile(aFileName);
    ASSERT_EQ(status,IFSelect_RetDone);
    int nb_root = aReader.NbRootsForTransfer();
    int nb_shapes = 0;
    for ( Standard_Integer n = 1; n <= nb_root; n++ ) {
        Standard_Boolean result = aReader.TransferRoot( n );
        ASSERT_EQ(Standard_True,result);
        aReader.PrintCheckTransfer(1, IFSelect_CountSummary);
        nb_shapes = aReader.NbShapes();
        if ( nb_shapes > 0 ) {
            TopoDS_Shape shape = aReader.Shape( n );
            ASSERT_EQ(Standard_False,shape.IsNull());
        }
    }
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

TEST(STEPImportTestSuite, testImportAP203_1)
{
    readFile((Standard_CString) step_file_ap203_1, "reader_ap203_1-C.log");
}

#ifdef LOCALE_FOR_TESTS
TEST(STEPImportTestSuite, testImportAP203_1L)
{
    Standard_CString oldLocale = std::setlocale(LC_ALL, LOCALE_FOR_TESTS);
    readFile((Standard_CString) step_file_ap203_1, "reader_ap203_1-" LOCALE_FOR_TESTS ".log");
    std::setlocale(LC_ALL, oldLocale);
}
TEST(STEPImportTestSuite, testImportAP203_1D)
{
    compareLogFile("reader_ap203_1-C.log", "reader_ap203_1-" LOCALE_FOR_TESTS ".log");
}
#endif

TEST(STEPImportTestSuite, testImportAP203_2)
{
    readFile((Standard_CString) step_file_ap203_2, "reader_ap203_2-C.log");
}

#ifdef LOCALE_FOR_TESTS
TEST(STEPImportTestSuite, testImportAP203_2L)
{
    Standard_CString oldLocale = std::setlocale(LC_ALL, LOCALE_FOR_TESTS);
    readFile((Standard_CString) step_file_ap203_2, "reader_ap203_2-" LOCALE_FOR_TESTS ".log");
    std::setlocale(LC_ALL, oldLocale);
}
TEST(STEPImportTestSuite, testImportAP203_2D)
{
    compareLogFile("reader_ap203_2-C.log", "reader_ap203_2-" LOCALE_FOR_TESTS ".log");
}
#endif

TEST(STEPImportTestSuite, testImportAP214_1)
{
    readFile((Standard_CString) step_file_ap214_1, "reader_ap214_1-C.log");
}

#ifdef LOCALE_FOR_TESTS
TEST(STEPImportTestSuite, testImportAP214_1L)
{
    Standard_CString oldLocale = std::setlocale(LC_ALL, LOCALE_FOR_TESTS);
    readFile((Standard_CString) step_file_ap214_1, "reader_ap214_1-" LOCALE_FOR_TESTS ".log");
    std::setlocale(LC_ALL, oldLocale);
}
TEST(STEPImportTestSuite, testImportAP214_1D)
{
    compareLogFile("reader_ap214_1-C.log", "reader_ap214_1-" LOCALE_FOR_TESTS ".log");
}
#endif

TEST(STEPImportTestSuite, testImportAP214_2)
{
    readFile((Standard_CString) step_file_ap214_2, "reader_ap214_2-C.log");
}

#ifdef LOCALE_FOR_TESTS
TEST(STEPImportTestSuite, testImportAP214_2L)
{
    Standard_CString oldLocale = std::setlocale(LC_ALL, LOCALE_FOR_TESTS);
    readFile((Standard_CString) step_file_ap214_2, "reader_ap214_2-" LOCALE_FOR_TESTS ".log");
    std::setlocale(LC_ALL, oldLocale);
}
TEST(STEPImportTestSuite, testImportAP214_2D)
{
    compareLogFile("reader_ap214_2-C.log", "reader_ap214_2-" LOCALE_FOR_TESTS ".log");
}
#endif

TEST(STEPImportTestSuite, testImportAP214_3)
{
    readFile((Standard_CString) step_file_ap214_3, "reader_ap214_3-C.log");
}

#ifdef LOCALE_FOR_TESTS
TEST(STEPImportTestSuite, testImportAP214_3L)
{
    Standard_CString oldLocale = std::setlocale(LC_ALL, LOCALE_FOR_TESTS);
    readFile((Standard_CString) step_file_ap214_3, "reader_ap214_3-" LOCALE_FOR_TESTS ".log");
    std::setlocale(LC_ALL, oldLocale);
}
TEST(STEPImportTestSuite, testImportAP214_3D)
{
    compareLogFile("reader_ap214_3-C.log", "reader_ap214_3-" LOCALE_FOR_TESTS ".log");
}
#endif

int main(int argc, char **argv){
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
