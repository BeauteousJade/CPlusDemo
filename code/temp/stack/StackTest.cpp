//
// Created by pby on 2022/8/14.
//

#include "Stack.h"

using namespace std;

/**
 *
 * 模板测试代码。
 *
 */
int main_stack() {

    Stack<int> stack = Stack<int>(10);
    stack.push(1);
    stack.push(2);
    stack.push(3);
    stack.show();

    Stack<char *> stack1 = Stack<char *>(10);
    stack1.push("1234");
    stack1.push("pby");
    stack1.show();


}

