#include "pch.h"
#include "CppUnitTest.h"
#include "../Triad.cpp"
#include "../Triad.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			Triad a(1, 2, 3);
			int test = a.GetHours();
			Assert::AreEqual(test, 1);
		}
	};
}
