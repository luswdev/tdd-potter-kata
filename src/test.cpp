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
    machine.buy(2, 2);
    EXPECT_EQ(machine.get_total_price(), 290);
}

TEST(potter, BuyThird)
{
    potter machine;
    machine.buy(1, 1);
    machine.buy(2, 2);
    machine.buy(3, 1);
    EXPECT_EQ(machine.get_total_price(), 370);
}

TEST(potter, BuyTotal)
{
    potter machine;
    machine.buy(1, 1);
    machine.buy(1, 1);
    machine.buy(2, 1);
    machine.buy(2, 1);
    machine.buy(3, 1);
    machine.buy(3, 1);
    machine.buy(4, 1);
    machine.buy(5, 1);
    EXPECT_EQ(machine.get_total_price(), 675);
}
