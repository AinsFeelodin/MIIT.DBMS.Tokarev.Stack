#include "pch.h"
#include "CppUnitTest.h"
#include "../Stack/Stack.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Test
{
	TEST_CLASS(Test)
	{
	public:
		
        // Тест метода toString
        TEST_METHOD(TestToString)
        {
            Stack<int> stack;
            stack.push(1);
            stack.push(2);
            stack.push(3);

            Assert::AreEqual(std::string("[3, 2, 1]"), stack.toString()); //
        }
        TEST_METHOD(TestPush)
        {
            Stack<int> stack;
            stack.push(10);
            stack.push(20);

            Assert::AreEqual(20, stack.peek()); 
            Assert::AreEqual(2, stack.getSize());
        }

        // Тест метода pop
        TEST_METHOD(TestPop)
        {
            Stack<int> stack;
            stack.push(10);
            stack.push(20);

            Assert::AreEqual(20, stack.pop());
            Assert::AreEqual(10, stack.pop()); 
            Assert::IsTrue(stack.isEmpty());   
        }

	};
}
