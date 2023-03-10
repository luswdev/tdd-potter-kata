#pragma once

#include <memory>

class potter
{
public:
    potter();
    ~potter();

    void buy(
        int episode,
        int count
    );

    int get_total_price(void);
private:
    const int BASE_PRICE = 100;
    const float DISCOUNT_TABLE[6] = { 0, 1, 0.95, 0.9, 0.8, 0.75 };
    const int EPISODE_COUNT = 7;

    std::unique_ptr<int[]> episodes;
    int price;

    void update_discount(void);
};
