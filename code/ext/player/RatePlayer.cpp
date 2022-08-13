//
// Created by pby on 2022/8/13.
//

#include "RatePlayer.h"

// C++ 可以不调用父类的构造函数。
RatePlayer::RatePlayer(const string &fn, const string &ln) : TableTennisPlayer(fn, ln) {

}


void RatePlayer::setRating(int rating) {
    this->rating = rating;
}

int RatePlayer::getRating() {
    return rating;
}
