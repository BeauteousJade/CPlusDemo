//
// Created by pby on 2022/8/20.
//

#include "Animal.h"
#include "Dog.h"

int main_animal_test() {
    Animal *a1 = new Animal("pby");
    Animal *a2 = new Dog("pby2");
    Animal *a3 = new Dog("pby3");

    Dog *dog = dynamic_cast<Dog *> (a1);

    // typeid返回的是一个type_info,用来对象的类型。
    cout << "name:" << typeid(a1).name() << endl;


    cout << "a1 is Dog? :" << (typeid(*a1) == typeid(Dog)) << endl;
    cout << "a2 is Dog? :" << (typeid(*a2) == typeid(Dog)) << endl;

    cout << "a2 == a1 ? :" << (typeid(*a2) == typeid(*a1)) << endl;
    cout << "a2 == a3 ? :" << (typeid(*a2) == typeid(*a3)) << endl;



    // 强转失败，指针为0，即空指针¬.
    if (dog == nullptr) {
        cout << "cast error" << endl;
    }

    int a = 10;
    const int *b = &a;
    // 强转非const.
    int *c = const_cast<int *>(b);
}

