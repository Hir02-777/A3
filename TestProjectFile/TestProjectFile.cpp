#include "pch.h"
#include "CppUnitTest.h"

extern "C" int is_valid_move(const char* move);
extern "C" const char* determine_winner(const char* player1, const char* player2);

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TestProjectFile
{
    TEST_CLASS(TestProjectFile)
    {
    public:

        TEST_METHOD(Player1Wins)
        {
            Assert::AreEqual("Player1", determine_winner("Rock", "Scissors"));
        }

        TEST_METHOD(Player2Wins)
        {
            Assert::AreEqual("Player2", determine_winner("Scissors", "Rock"));
        }

        TEST_METHOD(DrawCase)
        {
            Assert::AreEqual("Draw", determine_winner("Paper", "Paper"));
        }

        TEST_METHOD(InvalidInput)
        {
            Assert::AreEqual("Invalid", determine_winner("rock", "Paper"));
        }

        TEST_METHOD(ValidityChecker)
        {
            Assert::AreEqual(1, is_valid_move("Rock"));
            Assert::AreEqual(0, is_valid_move("rock"));
        }
    };
}