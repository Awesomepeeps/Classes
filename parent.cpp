#include <iostream>
#include <cstring>
#include "parent.h"

using namespace std;

parent::parent(void) {
    title = new char(80);
}
char * parent::getTitle() {
    return title;
}
void parent::setTitle(char* newTitle) {
    strcpy(title, newTitle);    
}
int parent::getYear() {
    return year;
}
void parent::setYear(int newYear) {
    year = newYear;
}
void parent::printAll(void) {
    cout << "Title is: " << title << endl;
    cout << "Year is: " << year << endl;
}
parent::~parent(void) {
    delete title;
}