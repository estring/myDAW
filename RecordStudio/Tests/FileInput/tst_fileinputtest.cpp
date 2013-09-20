#include <QString>
#include <QtTest>
#include <QCoreApplication>
//#include "../RecordStudio/DAWComponents/bass.h"
//#include "../RecordStudio/DAWComponents/fileinput.h"

class FileInputTest : public QObject
{
    Q_OBJECT
    
public:
    FileInputTest();
    
private Q_SLOTS:
    void initTestCase();
    void cleanupTestCase();
    void CreateFileInput();
};

FileInputTest::FileInputTest()
{
}

void FileInputTest::initTestCase()
{
}

void FileInputTest::cleanupTestCase()
{
}

void FileInputTest::CreateFileInput()
{
    QVERIFY2(true, "Failure");
}

QTEST_MAIN(FileInputTest)

#include "tst_fileinputtest.moc"
