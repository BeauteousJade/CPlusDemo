//
// Created by pby on 2022/8/13.
//

#include "BaseDMA.h"
#include "HasDMA.h"
#include <iostream>

using namespace std;

/**
 * 友元函数继承。
 */
int main() {


    HasDMA *dma = new HasDMA(10);
    BaseDMA dma1 = HasDMA(10);


    cout << (*dma) << endl;
    // 调用的是BaseDMA,不存在多态。只有虚方法才有多态。
    cout << (dma1) << endl;

}
