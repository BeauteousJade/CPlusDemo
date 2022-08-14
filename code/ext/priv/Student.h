//
// Created by pby on 2022/8/14.
//

#ifndef DEMO_STUDENT_H
#define DEMO_STUDENT_H

#include <string>
#include <valarray>

using namespace std;

/**
 * 私有继承，基类的共有、保护成员和函数，在派生类里面都变成了私有的。
 * 保护继承也是如此。
 * 继承没有指定权限，默认为private.
 */
class Student : private string, private valarray<double> {


public:
    Student(const char *str, const double *pd, int n);

    const string &getName() const;

    // 虽然方法被私有化了，但是可以使用using开放权限。
    using valarray<double>::min;
    using valarray<double>::max;
};


#endif //DEMO_STUDENT_H
