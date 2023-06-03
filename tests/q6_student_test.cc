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