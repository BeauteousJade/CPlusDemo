//
// Created by pby on 2022/8/14.
//

#include "Array.h"

// 模板的显示具体化。
// 有时候，可能需要在为特殊类型时，对模板进行修改，使其行为不同，这种情况下需要显示具体化。
// 比如，使用<符号进行比较。
//template
//class Array<int, 100>;


// 部分具体化，假设有两个泛型：Pair<T1, T2>
//template
//class Pair<T1, int>;

/**
 *  具体化是针对于定义的地方，实例化是针对于代码使用出。
 */
int main_array() {
    // 模板的隐式实例化。
    Array<int, 10> array;
    //-----------------
    // 这三个方法调用的同一个[]方法。即优先级高的那个。
    array[0] = 1;
    array[1] = 2;
    const int a = array[3];
    //------------------
    array.show();

}

