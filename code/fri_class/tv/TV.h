//
// Created by pby on 2022/8/20.
//

#ifndef DEMO_TV2_H
#define DEMO_TV_H

#include "iostream"

using namespace std;


class TV {

private:
    int mode = 0;

    void setMode(int mode);

public:
    friend class Remote; // 标识Remote是自己的友元类。

};

class Remote {
public:
    Remote() {}

    void setMode(TV &tv, int mode) {
        tv.setMode(mode);
    }
};


#endif //DEMO_TV2_H
