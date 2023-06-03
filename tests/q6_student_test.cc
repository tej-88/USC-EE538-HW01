#include "src/lib/cpplib.h"

#include <map>
#include <vector>

#include "gtest/gtest.h"

// Add your own tests in this file
TEST(Flatten3DVector, EmptyInput) {
  CPPLib s;
  std::vector< std::vector< std::vector<int> > > input;
  std::vector<int> actual = s.Flatten3DVector(input);
  std::vector<int> expected;
  EXPECT_EQ(expected, actual);
}

TEST(Flatten3DVector, SingleElement) {
  CPPLib s;
  std::vector< std::vector< std::vector<int> > > input = {{{1}}};
  std::vector<int> actual = s.Flatten3DVector(input);
  std::vector<int> expected = {1};
  EXPECT_EQ(expected, actual);
}

TEST(Flatten3DVector, SingleRow) {
  CPPLib s;
  std::vector< std::vector< std::vector<int> > > input = {{{1, 3, 4}}};
  std::vector<int> actual = s.Flatten3DVector(input);
  std::vector<int> expected = {1, 3, 4};
  EXPECT_EQ(expected, actual);
}

TEST(Flatten3DVector, SingleCol) {
  CPPLib s;
  std::vector< std::vector< std::vector<int> > > input = {{{1},{3},{4}}};
  std::vector<int> actual = s.Flatten3DVector(input);
  std::vector<int> expected = {1, 3, 4};
  EXPECT_EQ(expected, actual);
}

TEST(Flatten3DVector, SingleMatrix) {
  CPPLib s;
  std::vector< std::vector< std::vector<int> > > input = {{{1, 2, 3},{3, 5, 6},{4, 1}}};
  std::vector<int> actual = s.Flatten3DVector(input);
  std::vector<int> expected = {1, 2, 3, 3, 5, 6, 4, 1};
  EXPECT_EQ(expected, actual);
}

TEST(Flatten3DVector, MultiMatrix) {
  CPPLib s;
  std::vector< std::vector< std::vector<int> > > input = {{{1, 2, 3},{3, 5, 6},{4, 1}}, {{3, 2}, {5, 4}, {8, 1, 4, 2}}};
  std::vector<int> actual = s.Flatten3DVector(input);
  std::vector<int> expected = {1, 2, 3, 3, 5, 6, 4, 1, 3, 2, 5, 4, 8, 1, 4, 2};
  EXPECT_EQ(expected, actual);
}