#include <gtest/gtest.h>

TEST(potter, BuyFirst)
{
    int price;
    price = buy(1);
    EXPECT_EQ(price, 100);
}
