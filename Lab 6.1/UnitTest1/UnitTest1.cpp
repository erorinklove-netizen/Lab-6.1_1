#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

// Підключення файлу з основним кодом
#include "D:\education\Lab 6.1/Lab 6.1.cpp"

namespace IterativeTests
{
    TEST_CLASS(TestCriterion)
    {
    public:
        TEST_METHOD(Test_isOddAndMultipleOf3)
        {
            Assert::IsTrue(isOddAndMultipleOf3(15));
            Assert::IsTrue(isOddAndMultipleOf3(33));
            Assert::IsFalse(isOddAndMultipleOf3(12));
            Assert::IsFalse(isOddAndMultipleOf3(8));
            Assert::IsFalse(isOddAndMultipleOf3(30));
        }
    };

    TEST_CLASS(TestCount)
    {
    public:
        TEST_METHOD(Test_countMatching)
        {
            int a[] = { 15, 12, 21, 30, 7, 9 };
            Assert::AreEqual(3, countMatching(a, 6)); // 15, 21, 9
        }
    };

    TEST_CLASS(TestSum)
    {
    public:
        TEST_METHOD(Test_sumMatching)
        {
            int a[] = { 15, 12, 21, 30, 7, 9 };
            Assert::AreEqual(45, sumMatching(a, 6)); // 15+21+9
        }
    };

    TEST_CLASS(TestReplace)
    {
    public:
        TEST_METHOD(Test_replaceMatching)
        {
            int a[] = { 15, 12, 21, 30, 7, 9 };
            replaceMatchingWithZero(a, 6);

            Assert::AreEqual(0, a[0]);
            Assert::AreEqual(12, a[1]);
            Assert::AreEqual(0, a[2]);
            Assert::AreEqual(30, a[3]);
            Assert::AreEqual(7, a[4]);
            Assert::AreEqual(0, a[5]);
        }
    };
}
