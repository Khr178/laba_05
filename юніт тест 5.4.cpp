#include "pch.h"
#include "CppUnitTest.h"
#include "../лаба 5.4/лаба 5.4.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace юніттест54
{
	TEST_CLASS(юніттест54)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int N = 3;
			int K = 2;

			double res = P0(N,0);
			

			double expected = 0;


			Assert::AreEqual(res, expected);
		}
	};
}
