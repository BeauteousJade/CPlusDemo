//
// Created by pby on 2022/8/13.
//

#ifndef DEMO_ACCTABC_H
#define DEMO_ACCTABC_H

#include <iostream>
#include <string>

using namespace std;

class AcctABC {

private:
    string name;
    double balance;

protected:
    // 前面的const表示外部不能修改，后面的const表示方法内部修改。
    const string &geName() const {
        return name;
    }

public:
    AcctABC(const string &name = "none", double bal = 0.0) {
        this->name = name;
        this->balance = bal;
    }

    // 纯虚函数。只要定义了，表示当前类是抽象类，不能创建对象。
    virtual void withDraw(double amt) = 0;

    double getBalance() const {
        return balance;
    }

    virtual ~AcctABC() {
        cout << "~AcctABC" << endl;
    }

};

#endif //DEMO_ACCTABC_H
