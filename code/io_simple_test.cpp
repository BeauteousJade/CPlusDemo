//
// Created by pby on 2022/5/4.
//

#include <fstream>

using namespace std;

int main() {

    fstream outFile;
    outFile.open("../file/test.txt");
    outFile << 1 << endl;
    outFile << "123" << endl;
    outFile << 12.3 << endl;
    outFile << "jade" << endl;

    outFile.close();
}
