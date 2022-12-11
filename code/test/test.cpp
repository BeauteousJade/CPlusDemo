//
// Created by pby on 2022/12/10.
//

#include <string>
#include <iostream>
// PRIxPTR的头文件
#include <inttypes.h>

using namespace ::std;


void print(int **array) {
    for (int i = 0; i < 10; ++i) {
        for (int j = 0; j < 10; ++j) {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
}


int main() {
    int **array;
    array = new int *[10];
    for (int i = 0; i < 10; ++i) {
        array[i] = new int[10];
        memset(array[i], 0, 10 * sizeof(int));
    }

    cout << "update before:" << endl;
    print(array);
    int **newArray = array;
    for (int i = 0; i < 10; i++) {
        *(*newArray++) = 1;
    }
    cout << "update after:" << endl;
    print(array);

    for (int i = 0; i < 10; ++i) {
        delete[] array[i];
    }
    cout << "11" << endl;

    int base_addr;
//    sscanf("", "%" PRIxPTR "-%*lx %*4s 00000000", &base_addr);
}

