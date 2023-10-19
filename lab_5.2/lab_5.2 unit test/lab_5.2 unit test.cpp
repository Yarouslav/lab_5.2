#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_5.2/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace lab52unittest
{
	TEST_CLASS(lab52unittest)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			double c;
			int n = 0;
			c = S(1, 0.00001, n, 1);
			Assert::AreEqual(c, 13.4764, 0.01);
		}
		TEST_METHOD(TestMethod2)
		{
			double a;
			int n = 0;
			a = A(1, 6, 1);
			Assert::AreEqual(a, 0.846154, 0.000001);
		}
	};
}

