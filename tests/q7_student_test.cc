#include "src/lib/cpplib.h"

#include <map>
#include <vector>

#include "gtest/gtest.h"

// Add your own tests in this file
TEST(climbStairs, ZeroInput) {
  CPPLib s;
  int input = 0;
  int actual = s.climbStairs(input);
  int expected = 0;
  EXPECT_EQ(expected, actual);
}

TEST(climbStairs, OneInput) {
  CPPLib s;
  int input = 1;
  int actual = s.climbStairs(input);
  int expected = 1;
  EXPECT_EQ(expected, actual);
}

TEST(climbStairs, TwoInput) {
  CPPLib s;
  int input = 2;
  int actual = s.climbStairs(input);
  int expected = 2;
  EXPECT_EQ(expected, actual);
}

TEST(climbStairs, FourInput) {
  CPPLib s;
  int input = 4;
  int actual = s.climbStairs(input);
  int expected = 5;
  EXPECT_EQ(expected, actual);
}

TEST(climbStairs, NegativeInput) {
  CPPLib s;
  int input = -4;
  int actual = s.climbStairs(input);
  int expected = -1;
  EXPECT_EQ(expected, actual);
}

TEST(climbStairs, AboveFortyFiveInput) {
  CPPLib s;
  int input = 46;
  int actual = s.climbStairs(input);
  int expected = -1;
  EXPECT_EQ(expected, actual);
}