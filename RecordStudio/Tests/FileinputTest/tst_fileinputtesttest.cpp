#include <QString>
#include <QtTest>

class FileinputTestTest : public QObject
{
    Q_OBJECT
    
public:
    FileinputTestTest();
    
private Q_SLOTS:
    void initTestCase();
    void cleanupTestCase();
    void testCase1();
};

FileinputTestTest::FileinputTestTest()
{
}

void FileinputTestTest::initTestCase()
{
}

void FileinputTestTest::cleanupTestCase()
{
}

void FileinputTestTest::testCase1()
{
    QVERIFY2(true, "Failure");
}

QTEST_APPLESS_MAIN(FileinputTestTest)

#include "tst_fileinputtesttest.moc"
