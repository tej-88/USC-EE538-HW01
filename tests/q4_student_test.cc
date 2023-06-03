#include "src/lib/cpplib.h"

#include <map>
#include <vector>

#include "gtest/gtest.h"

// Add your own tests in this file
TEST(RandomCase, EmptyInput) {
  CPPLib s;
  std::string input;
  std::string actual = s.RandomCase(input);
  std::string expected;
  EXPECT_EQ(expected, actual);
}

TEST(RandomCase, SingleInput) {
  CPPLib s;
  std::string input = "a";
  std::string actual = s.RandomCase(input);
  bool condition = (actual == "a") || (actual == "A");
  EXPECT_TRUE(condition);
}

TEST(RandomCase, SingleNonLetter) {
  CPPLib s;
  std::string input = "2";
  std::string actual = s.RandomCase(input);
  bool condition = (actual == "2");
  EXPECT_TRUE(condition);
}

TEST(RandomCase, NonLetter) {
  CPPLib s;
  std::string input = "2.?4";
  std::string actual = s.RandomCase(input);
  bool condition = (actual == "2.?4");
  EXPECT_TRUE(condition);
}

TEST(RandomCase, DoubleInputNonLetter) {
  CPPLib s;
  std::string input = "a3";
  std::string actual = s.RandomCase(input);
  bool condition = (actual == "a3") || (actual == "A3");
  EXPECT_TRUE(condition);
}