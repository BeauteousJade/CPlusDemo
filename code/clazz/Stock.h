//
// Created by pby on 2022/6/26.
//

#ifndef DEMO_STOCK_H
#define DEMO_STOCK_H

#include <string>

using namespace std;

class Stock {

private:
    const int a = 10;
    string mName = "init";
    int mTotal = 0;

public:
    Stock();

    Stock(const string &name, int total);

    ~Stock();

    // const 保证此方法不会修改值。
    void show() const;

    void update(int updateValue);
};

#endif //DEMO_STOCK_H
