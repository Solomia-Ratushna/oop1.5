#include "pch.h"
#include "CppUnitTest.h"
#include "../lab1.5/Rational.cpp"
#include "../lab1.5/Pair.cpp"
#include "../lab1.5/Pair.h"
#include "../lab1.5/Rational.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			
			Pair a, b;
			Rational f;
			a.Init(1, 2);
			b.Init(4, 3);

			double res1, res2;
			res1 = f.ComparePairs(a, b);
			res2 = f.ComparePairs(a, b);
			Assert::AreEqual(res1, 2.0);
			Assert::AreEqual(res2, 2.0);
		}
	};
}
