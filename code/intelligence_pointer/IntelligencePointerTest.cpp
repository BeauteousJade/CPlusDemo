//
// Created by pby on 2022/12/23.
//
#include <iostream>
#include <memory>

using namespace std;

void test_ip_1() {
    // 危险操作，方法结束，p指针对应的内存没有释放。
//    double *p = new double;
//    *p = 25.5;
//    return;
}

void test_ip_2() {
    // 智能指针，当方法正常结束或者异常结束，都可以得到释放。
//    auto_ptr<double> ap(new double);
//    *ap = 10;
//    return;
}

void test_ip_3() {
    auto_ptr<string> films[2] = {
            auto_ptr<string>(new string("pby1")),
            auto_ptr<string>(new string("pby2"))
    };
    auto_ptr<string> selected = films[1];
    for (int i = 0; i < 2; ++i) {
        // 访问到1时，就报错，因为films[1]的所有权已经转让给selected，不能再用films[1]来访问
        cout << "index:" << i << ", name:" << *films[i] << endl;
    }
    cout << "end" << endl;
}

void test_ip_4() {
    shared_ptr<string> films[2] = {
            shared_ptr<string>(new string("pby1")),
            shared_ptr<string>(new string("pby2"))
    };
    // shared_ptr时引用计数，只有当计数为0，才会释放。
    shared_ptr<string> selected = films[1];
    for (int i = 0; i < 2; ++i) {
        cout << "index:" << i << ", name:" << *films[i] << endl;
    }
    cout << "end" << endl;
}

void test_ip_5() {
//    unique_ptr<string> films[2] = {
//            unique_ptr<string>(new string("pby1")),
//            unique_ptr<string>(new string("pby2"))
//    };
//    // unique_ptr 跟auto_ptr类似，只不过它会在编译阶段报错。
//    unique_ptr<string> selected = films[1];
//    for (int i = 0; i < 2; ++i) {
//        // 访问到1时，就报错，因为films[1]的所有权已经转让给selected，不能再用films[1]来访问
//        cout << "index:" << i << ", name:" << *films[i] << endl;
//    }
//    cout << "end" << endl;
}

unique_ptr<string> test_ip_6() {
    unique_ptr<string> ptr = unique_ptr<string>(new string("pby"));
    return ptr;
}

void test_ip_7(unique_ptr<string> &ps) { // 传递引用，因为非引用会开辟一个新的对象。
    cout << *ps << endl;
}

int main_test_ip() {
    test_ip_4();
    // 如果源unique_ptr 是一个临时右值，是允许赋值的，因为右值不会有机会在使用。
    unique_ptr<string> ps = test_ip_6();
    unique_ptr<string> ps1;
    // 这个也是允许的。
    ps1 = unique_ptr<string>(new string("pby1"));
    cout << *ps << " " << *ps1 << endl;
    // 将ps1的所有权转让给ps2，因此不能使用ps1访问
    unique_ptr<string> ps2 = move(ps1);
//    cout << "address, ps1:" << ps1 << " ps2:" << ps2 << " value, ps1:" << *ps1 << " ps2:" << *ps2 << endl;
    unique_ptr<double> ps3(new double(5));
    test_ip_7(ps);
}

