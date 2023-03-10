#include <gtest/gtest.h>
#include "potter.h"

TEST(potter, BuyFirst)
{
    potter machine;
    machine.buy(1, 1);
    EXPECT_EQ(machine.get_total_price(), 100);
}

TEST(potter, BuySecond)
{
    potter machine;
    machine.buy(1, 1);
    machine.buy(2, 1);
    EXPECT_EQ(machine.get_total_price(), 190);
}

TEST(potter, BuySecondAgain)
{
    potter machine;
    machine.buy(1, 1);
    machine.buy(2, 1);
    machine.buy(2, 1);
    EXPECT_EQ(machine.get_total_price(), 290);
}
