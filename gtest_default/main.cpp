#include <iostream>
#include "gtest/gtest.h"

// BELOW IS TESTS
#include "include_test.h"


int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  
  return RUN_ALL_TESTS();
}