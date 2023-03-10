#include <gtest/gtest.h>
#include "potter.h"

TEST(potter, BuyFirst)
{
    int price = 0;
    potter machine;
    price += machine.buy(1, 1);
    EXPECT_EQ(price, 100);
}

TEST(potter, BuySecond)
{
    int price = 0;
    potter machine;
    price += machine.buy(1, 1);
    price += machine.buy(2, 1);
    EXPECT_EQ(price, 190);
}
