//
// Created by pby on 2022/5/4.
//

#include <iostream>
#include <fstream>
#include <istream>
#include <string>

using namespace std;

int main5() {

    string file = "../file/test.txt";
    fstream outFile;
    outFile.open(file);
    outFile << 1 << endl;
    outFile << "123" << endl;
    outFile << 12.3 << endl;
    outFile << "jade" << endl;
    outFile.close();

    ifstream in;
    in.open(file);
    char line[60];
    while (in.getline(line, 60)) {
        cout << "line = " << line << endl;
    }
}
