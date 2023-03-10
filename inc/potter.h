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

    void update_discount(void);
};
