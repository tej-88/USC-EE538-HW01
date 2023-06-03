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
