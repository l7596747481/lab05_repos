#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest2
{
	TEST_CLASS(UnitTest2)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double h;
			double x = 2;
			double y = 0;
		
		    h = (pow(x, 2) + pow(y, 2)) / (1 + pow(x, 2) + pow(x, 2) * pow(y, 2));
			Assert::AreEqual(h, 0,8);
		}
	};
}
