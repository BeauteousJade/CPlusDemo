//
// Created by pby on 2022/8/13.
//

#ifndef DEMO_TABLETENNISPLAYER_H
#define DEMO_TABLETENNISPLAYER_H

#include <string>

using namespace std;


class TableTennisPlayer {

    int a = 10;

private:
    string firstName;
    string lastName;

protected:
    int b = 10;

public:
    TableTennisPlayer(const string &fn = "none", const string &ln = "none");

    void name() const;

};

#endif //DEMO_TABLETENNISPLAYER_H
