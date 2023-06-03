// NOTE: Add your own q2 tests in this file
#include "src/lib/cpplib.h"

#include <map>
#include <vector>

#include "gtest/gtest.h"

// Add your own tests in this file
TEST(FindMedian, EmptyInput) {
  CPPLib s;
  std::vector<int> input;
  float actual = s.FindMedian(input);
  float expected = -1;
  EXPECT_EQ(expected, actual);
}