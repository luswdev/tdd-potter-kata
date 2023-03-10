#include "potter.h"

potter::potter() :
    price(0)
{
    this->episodes.reset(new int[this->EPISODE_COUNT]());
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
    int diff_cnt = 0;
    for (int i = 0; i < EPISODE_COUNT; ++i) {
        if (this->episodes[i]) {
            diff_cnt++;
            this->episodes[i]--;
        }
    }

    this->price = this->BASE_PRICE * diff_cnt;
    this->price *= this->DISCOUNT_TABLE[diff_cnt];

    for (int i = 0; i < EPISODE_COUNT; ++i) {
        this->price += this->BASE_PRICE * this->episodes[i];
    }
}
