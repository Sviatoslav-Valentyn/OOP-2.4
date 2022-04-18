#include "pch.h"
#include "CppUnitTest.h"
#include "../lab 2.4/Vector.h"
#include "../lab 2.4/Vector.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int N[2]{ 2, 3 };
			Vector v{ N,3 };
			Vector v1{ N , 3 };
			Assert::AreEqual(true, Equal(v, v1));
		}
	};
}