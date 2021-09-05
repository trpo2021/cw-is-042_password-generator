#include "pch.h"
#include "CppUnitTest.h"
#include "..\header.h"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace test
{
	TEST_CLASS(test)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Assert::IsTrue(number_of_special_chars + number_of_numeral + number_of_big_chars <= length_password, L"Assert");
			Logger::WriteMessage(L"Тест пройден");
		}
	};
}
