//
// Created by pby on 2022/7/2.
//

#ifndef DEMO_STONEWT_H
#define DEMO_STONEWT_H

class Stonewt {
private:
    enum {
        lbs_per_stn = 14 // 磅/英石
    };
    double stone; // 英石
    double pounds; // 磅
//    static int a = 10; // 头文件不能初始化静态变量

public:
    Stonewt();

    // explicit Stonewt(double stone);
    // explicit表示不能在类型转换的时候自动调用
    Stonewt(double stone);

    ~Stonewt();

    void show() const;

    // 转换函数：
    // 1. 必须是类方法
    // 2. 不能指定返回类型
    // 3. 不能有参数
    // 4. 可使用explicit关键字限制显示转换
    operator int() const;

    operator double() const;

    Stonewt operator+(const Stonewt &s) const;
};

#endif //DEMO_STONEWT_H
