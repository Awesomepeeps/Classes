#ifndef MUSIC_H
#define MUSIC_H

#include <iostream>
#include <cstring>
#include "parent.h"

using namespace std;

class music : public parent {
    public:
        void printAll(void);
        music();
        ~music();
        char *getPublisher();
        void setPublisher(char*);
        int getDuration();
        void setDuration(int);
        char *getArtist();
        void setArtist(char*);
    protected:
        char *publisher;
        int duration;
        char *artist;
};

#endif