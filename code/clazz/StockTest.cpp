//
// Created by pby on 2022/6/26.
//

#include "Stock.h"

int main_stock_test() {
    Stock stock;
    stock.show();
    stock.update(10);
    stock.show();

    Stock stock1("pby", 1);
    stock1.show();

    Stock *stock2 = new Stock("pby1", 1);
    delete stock2;
}

