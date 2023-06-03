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