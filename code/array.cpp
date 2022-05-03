//
// Created by pby on 2022/5/3.
//


#include <iostream>
#include <cstring>
#include <string>

using namespace std;

struct inflatable {
    string name;
    float volume;
    double price;
};

union one4all {
    int int_val;
    long long_val;
    double double_val;
};

enum color {
    red = 0, blue, green = 0, black
};

int main2() {

    int array[10] = {};

    cout << array[0] << " " << array[1] << " " << array[10] << endl;

    char dog[] = {'1', '2'};
    char dog1[] = {'1', '2', '\0'};
    char dog2[] = "庞柄宇";

    cout << dog << endl;
    cout << dog1 << endl;

    cout << dog2 << " size = " << sizeof(dog2) / sizeof(char) << endl;
    cout << dog2[0] << " " << dog2[1] << " " << dog2[2] << " " << dog2[3] << endl;


    char name1[15] = "C++";

    cout << name1 << " length = " << strlen(name1) << endl;

//    char name[5];
//    cin.getline(name, 5);
//    cout << name << endl;

//    int year;
    char name[5];
//    cin >> year;
//    cin.get();
//    cin.getline(name, 5);
//    cout << "year = " << year << " name = " << name << endl;

//    string string1;
//    getline(cin, string1);
//
//    cout << "string1 = " << string1 << " length = " << string1.length() << " size = " << string1.size() << endl;

    cout << R"+*("\n")"))))))+*" << endl;

    inflatable a = {
            "pby",
            2.0,
            299.9
    };
    cout << "inflatable name = " << a.name << " volume = " << a.volume << " price = " << a.price << endl;
    one4all all;
    all.int_val = 100000;
    cout << "double_val = " << all.double_val << " int_val = " << all.int_val << endl;
    all.double_val = 10.0;

    cout << "double_val = " << all.double_val << " int_val = " << all.int_val << endl;

    cout << "red = " << red << " blue = " << blue << " green = " << green << " black = " << black << endl;
    cout << "isEquals = " << (red == green) << endl;


}