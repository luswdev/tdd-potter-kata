#include "potter.h"

potter::potter() :
    episodes(), price(0)
{
    /* empty */
}

potter::~potter()
{
    /* empty */
}

void potter::buy(int episode, int count)
{
    this->episodes[episode - 1]++;
    this->price += 100 * count;
    this->update_discount();
}

int potter::get_total_price(void)
{
    return this->price;
}

void potter::update_discount(void)
{
    if (this->episodes[0] && this->episodes[1]) {
        this->price *= 0.95;
    }
}