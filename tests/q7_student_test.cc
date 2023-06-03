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