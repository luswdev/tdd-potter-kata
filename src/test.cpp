#include <gtest/gtest.h>
#include "potter.h"

TEST(potter, BuyFirst)
{
    int price;
    potter machine;
    price = machine.buy(1, 1);
    EXPECT_EQ(price, 100);
}
