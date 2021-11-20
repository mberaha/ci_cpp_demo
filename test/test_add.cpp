#include <gtest/gtest.h>

#include "src/add.hpp"


TEST(add, right) {
 ASSERT_EQ(2, add(1, 1));
 ASSERT_EQ(3, add(1, 2));
 ASSERT_EQ(3, add(2, 1));
 ASSERT_EQ(10, add(5, 5));
 ASSERT_EQ(0, add(0, 0));
}

TEST(add, wrong) {
 ASSERT_EQ(2, add_wrong(1, 1));
 ASSERT_EQ(3, add_wrong(1, 2));
 ASSERT_EQ(3, add_wrong(2, 1));
}
