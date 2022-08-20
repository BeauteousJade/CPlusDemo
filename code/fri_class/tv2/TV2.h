//
// Created by pby on 2022/8/20.
//

#ifndef DEMO_TV2_H
#define DEMO_TV2_H

#include "iostream"

using namespace std;

class TV2;


class RemoteV2 {

public:
    void setMode(TV2 &tv, int mode);
};


class TV2 {
private:
    int mode = 0;

public:
    // 声明Remote的setMode方法是自己的友元方法。
    friend void RemoteV2::setMode(TV2 &tv, int mode);
};

inline void RemoteV2::setMode(TV2 &tv, int mode) {
    cout << "RemoteV2::setMode, oldMode:" << tv.mode << ", mode:" << mode << endl;
    tv.mode = mode;
}


#endif //DEMO_TV2_H
