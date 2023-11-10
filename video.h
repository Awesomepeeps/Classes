#ifndef VIDEO_H
#define VIDEO_H

#include <iostream>
#include <cstring>
#include "parent.h"

using namespace std;

class video : public parent {
    public:
        void printAll(void);
        video();
        ~video();
        char *getPublisher();
        void setPublisher(char*);
        int getRating();
        void setRating(int);
    protected:
        char *publisher;
        int rating;
};

#endif