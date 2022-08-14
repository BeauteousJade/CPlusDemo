//
// Created by pby on 2022/8/14.
//

#include "Student.h"

//多重继承，需要手动调用父类的构造方法。
// valarray<double>(pd, n) 初始化valarray，pd是数组，n是长度。
Student::Student(const char *str, const double *pd, int n) : string(str), valarray<double>(pd, n) {

}

const string &Student::getName() const {
    // 强转和不强转都可以。如果是友元函数，就需要强转。
    return (const string &) *this;
}
