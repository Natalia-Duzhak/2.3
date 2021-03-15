#include "pch.h"
#include "CppUnitTest.h"
#include "../Project2.3/Money.h"
#include "../Project2.3/Money.cpp"





using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest23
{
	TEST_CLASS(UnitTest23)
	{
	public:
		
		TEST_METHOD(TestMethod1);
	};
	inline void UnitTest23::TestMethod1()
	{
		Money z;
		bool k = 0;
		k = z.getk500();
		Assert::AreEqual(k, false);
	}
}
