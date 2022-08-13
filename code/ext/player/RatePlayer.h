//
// Created by pby on 2022/8/13.
//

#ifndef DEMO_RATEPLAYER_H
#define DEMO_RATEPLAYER_H

#include "TableTennisPlayer.h"


class RatePlayer : public TableTennisPlayer {

private:
    int rating;

public:
    RatePlayer(const string &fn, const string &ln);


    void setRating(int rating);

    int getRating();

};


#endif //DEMO_RATEPLAYER_H
