#include <iostream>
#include <cstring>
#include "video.h"

using namespace std;

video::video(void) {
    publisher = new char(80);
}
char* video::getPublisher() {
    return publisher;
}
void video::setPublisher(char* newPublisher) {
    publisher = new char(80);
    strcpy(publisher, newPublisher);    
}
int video::getRating() {
    return rating;
}
void video::setRating(int newRating) {
    rating = newRating;
}
void video::printAll(void) {
    cout << "Title is: " << title << endl;
    cout << "Year is: " << year << endl;
    cout << "Publisher is: " << publisher << endl;
    cout << "Rating is: " << rating << endl;
}
video::~video(void) {
    delete publisher;
}