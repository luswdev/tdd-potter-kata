#pragma once

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
    int episodes[7];
    int price;
    const int BASE_PRICE = 100;

    void update_discount(void);
};
