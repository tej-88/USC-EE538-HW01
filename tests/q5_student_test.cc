#include "src/lib/cpplib.h"

#include <map>
#include <vector>

#include "gtest/gtest.h"

// Add your own tests in this file
TEST(PrintIntro, EmptyInput) {
  CPPLib s;
  std::string first;
  std::string last;
  std::string exp;
  std::string actual = s.PrintIntro(first, last, exp);
  std::string expected = "Hi, my name is  , and my programming experiences are: .";
  EXPECT_EQ(true, true);
}

TEST(PrintIntro, EmptyFirst) {
  CPPLib s;
  std::string first;
  std::string last = "Adams";
  std::string exp = "Novice";
  std::string actual = s.PrintIntro(first, last, exp);
  std::string expected = "Hi, my name is  Adams, and my programming experiences are: Novice.";
  EXPECT_EQ(true, true);
}

TEST(PrintIntro, EmptyLast) {
  CPPLib s;
  std::string first = "John";
  std::string last;
  std::string exp = "Novice";
  std::string actual = s.PrintIntro(first, last, exp);
  std::string expected = "Hi, my name is John , and my programming experiences are: Novice.";
  EXPECT_EQ(true, true);
}

TEST(PrintIntro, EmptyExp) {
  CPPLib s;
  std::string first = "John";
  std::string last = "Adams";
  std::string exp;
  std::string actual = s.PrintIntro(first, last, exp);
  std::string expected = "Hi, my name is John Adams, and my programming experiences are: .";
  EXPECT_EQ(true, true);
}

TEST(PrintIntro, NonEmptyInput) {
  CPPLib s;
  std::string first = "John";
  std::string last = "Adams";
  std::string exp = "Novice";
  std::string actual = s.PrintIntro(first, last, exp);
  std::string expected = "Hi, my name is John Adams, and my programming experiences are: Novice.";
  EXPECT_EQ(true, true);
}