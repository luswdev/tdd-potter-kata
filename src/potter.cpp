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
}

int potter::get_total_price(void)
{
    this->update_discount();
    return this->price;
}

void potter::update_discount(void)
{
    if (this->episodes[0] && this->episodes[1] && !this->episodes[2]) {
        this->price = this->BASE_PRICE * 2 * 0.95;
        this->episodes[0]--;
        this->episodes[1]--;
    } else if (this->episodes[0] && this->episodes[1] && this->episodes[2]) {
        this->price = this->BASE_PRICE * 3 * 0.9;
        this->episodes[0]--;
        this->episodes[1]--;
        this->episodes[2]--;
    }

    this->price += this->episodes[0] * this->BASE_PRICE;
    this->price += this->episodes[1] * this->BASE_PRICE;
}
