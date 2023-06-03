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

TEST(FindMedian, SingleInput) {
  CPPLib s;
  std::vector<int> input = {3};
  float actual = s.FindMedian(input);
  float expected = 3;
  EXPECT_EQ(expected, actual);
}

TEST(FindMedian, EvenNumInput) {
  CPPLib s;
  std::vector<int> input = {3, 5, 7, 8, 8, 9};
  float actual = s.FindMedian(input);
  float expected = 7.5;
  EXPECT_EQ(expected, actual);
}

TEST(FindMedian, OddNumInput) {
  CPPLib s;
  std::vector<int> input = {3, 5, 7, 8, 9};
  float actual = s.FindMedian(input);
  float expected = 7;
  EXPECT_EQ(expected, actual);
}

TEST(FindMedian, EvenNumSameInput) {
  CPPLib s;
  std::vector<int> input = {5, 5, 5, 5};
  float actual = s.FindMedian(input);
  float expected = 5;
  EXPECT_EQ(expected, actual);
}

TEST(FindMedian, OddNumSameInput) {
  CPPLib s;
  std::vector<int> input = {5, 5, 5, 5, 5};
  float actual = s.FindMedian(input);
  float expected = 5;
  EXPECT_EQ(expected, actual);
}