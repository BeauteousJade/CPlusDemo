//
// Created by pby on 2022/8/6.
//

#ifndef DEMO_STRINGBAD_H
#define DEMO_STRINGBAD_H


class StringBad {

private:
    char *str;

public:

    static int num;

    static int count();

    StringBad();

    // 复制构造函数。
    StringBad(const StringBad &s);

    // 重载=运算符。
    StringBad &operator=(const StringBad &st);

    // 重载[]运算符，返回类型是char &表示既可以get,也可以set.
    // 前面const是避免外部手动修改，后面的const是避免方法内部修改。
//    const char &operator[](int index) const;
    char &operator[](int index);

    // 返回对象会调用复制构造函数。返回引用则不会。
    // 如果返回的对象是方法内部的局部变量，不能返回引用。
    const StringBad &max(const StringBad &s2);

    ~StringBad();

};


#endif //DEMO_STRINGBAD_H
