#include <TopoDS_Shape.hxx>
#include <BRepTools.hxx>
#include <BRep_Builder.hxx>

#include <OSD_File.hxx>
#include <OSD_Protection.hxx>
#include <TCollection_AsciiString.hxx>
#include <Message_PrinterOStream.hxx>
#include <Message_Messenger.hxx>
#include <Message.hxx>

#include <gtest/gtest.h>

#include "BRepImport_test_config.h"

static void readFile(Standard_CString aFileName, Standard_CString aLogFileName)
{
    Handle(Message_Printer) printer = new Message_PrinterOStream(aLogFileName, 0);
    Message::DefaultMessenger()->AddPrinter(printer);
    BRep_Builder aBuilder;
    TopoDS_Shape aShape;
	Standard_Boolean result = BRepTools::Read(aShape,aFileName,aBuilder);
    ASSERT_TRUE(result);
    ASSERT_FALSE(aShape.IsNull());
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

TEST(BRepImportTestSuite, testImportBRep1)
{
    readFile((Standard_CString) brep_file_1, "reader_1-C.log");
}

#ifdef LOCALE_FOR_TESTS
TEST(BRepImportTestSuite, testImportBRep1L)
{
    Standard_CString oldLocale = std::setlocale(LC_ALL, LOCALE_FOR_TESTS);
    readFile((Standard_CString) brep_file_1, "reader_1-" LOCALE_FOR_TESTS ".log");
    std::setlocale(LC_ALL, oldLocale);
}
TEST(BRepImportTestSuite, testImportBRep1D)
{
    compareLogFile("reader_1-C.log", "reader_1-" LOCALE_FOR_TESTS ".log");
}
#endif

TEST(BRepImportTestSuite, testImportBRep2)
{
    readFile((Standard_CString) brep_file_2, "reader_2-C.log");
}

#ifdef LOCALE_FOR_TESTS
TEST(BRepImportTestSuite, testImportBRep2L)
{
    Standard_CString oldLocale = std::setlocale(LC_ALL, LOCALE_FOR_TESTS);
    readFile((Standard_CString) brep_file_2, "reader_2-" LOCALE_FOR_TESTS ".log");
    std::setlocale(LC_ALL, oldLocale);
}
TEST(BRepImportTestSuite, testImportBRep2D)
{
    compareLogFile("reader_2-C.log", "reader_2-" LOCALE_FOR_TESTS ".log");
}
#endif

TEST(BRepImportTestSuite, testImportBRep3)
{
    readFile((Standard_CString) brep_file_3, "reader_3-C.log");
}

#ifdef LOCALE_FOR_TESTS
TEST(BRepImportTestSuite, testImportBRep3L)
{
    Standard_CString oldLocale = std::setlocale(LC_ALL, LOCALE_FOR_TESTS);
    readFile((Standard_CString) brep_file_3, "reader_3-" LOCALE_FOR_TESTS ".log");
    std::setlocale(LC_ALL, oldLocale);
}
TEST(BRepImportTestSuite, testImportBRep3D)
{
    compareLogFile("reader_3-C.log", "reader_3-" LOCALE_FOR_TESTS ".log");
}
#endif

TEST(BRepImportTestSuite, testImportBRep4)
{
    readFile((Standard_CString) brep_file_4, "reader_4-C.log");
}

#ifdef LOCALE_FOR_TESTS
TEST(BRepImportTestSuite, testImportBRep4L)
{
    Standard_CString oldLocale = std::setlocale(LC_ALL, LOCALE_FOR_TESTS);
    readFile((Standard_CString) brep_file_4, "reader_4-" LOCALE_FOR_TESTS ".log");
    std::setlocale(LC_ALL, oldLocale);
}
TEST(BRepImportTestSuite, testImportBRep4D)
{
    compareLogFile("reader_4-C.log", "reader_4-" LOCALE_FOR_TESTS ".log");
}
#endif


int main(int argc, char **argv){
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
