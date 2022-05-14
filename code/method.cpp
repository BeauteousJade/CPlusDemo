//
// Created by pby on 2022/5/14.
//

#include <iostream>

using namespace std;

int sum(const int array[], int n);

const int size = 3;

int main() {
    const int tempArray[3] = {1, 2, 3};
    cout << "sizeof tempArray " << sizeof(tempArray) << endl;
    int sumNumber = sum(tempArray, size);
    cout << "sumNumber = " << sumNumber << endl;

}

int sum(int array[], int n) {
    cout << "sizeof array " << sizeof(array) << endl;
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += array[i];
    }
    return sum;
}