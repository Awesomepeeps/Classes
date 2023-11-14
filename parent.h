#ifndef PARENT_H
#define PARENT_H

#include <iostream>
#include <cstring>

using namespace std;

class parent {
    public:
        virtual void printAll(void);
        parent();
        ~parent();
        char *getTitle();
        void setTitle(char*);
        int getYear();
        void setYear(int);
    protected:
        char *title;
        int year;
};

#endif