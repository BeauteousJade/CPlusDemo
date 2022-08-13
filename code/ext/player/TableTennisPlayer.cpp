//
// Created by pby on 2022/8/13.
//

#include "TableTennisPlayer.h"
#include <iostream>


TableTennisPlayer::TableTennisPlayer(const string &fn, const string &ln) {
    firstName = fn;
    lastName = ln;
}

void TableTennisPlayer::name() const {
    cout << "name = " << firstName << lastName << endl;
}

