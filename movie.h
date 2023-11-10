#ifndef MOVIE_H
#define MOVIE_H

#include <iostream>
#include <cstring>
#include "parent.h"

using namespace std;

class movie : public parent {
    public:
        void printAll(void);
        movie();
        ~movie();
        char *getDirector();
        void setDirector(char*);
        int getRating();
        void setRating(int);
        int getDuration();
        void setDuration(int);
    protected:
        char *director;
        int rating;
        int duration;
};

#endif