#include <iostream>
#include <cstring>
#include "movie.h"

using namespace std;

movie::movie(void) {
    director = new char(80);
}
char * movie::getDirector() {
    return director;
}
void movie::setDirector(char* newDirector) {
    strcpy(director, newDirector);    
}
int movie::getRating() {
    return rating;
}
void movie::setRating(int newRating) {
    rating = newRating;
}
int movie::getDuration() {
    return duration;
}
void movie::setDuration(int newDuration) {
    duration = newDuration;
}
void movie::printAll(void) {
    cout << "Media type is a movie" << endl;
    cout << "Title is: " << title << endl;
    cout << "Year is: " << year << endl;
    cout << "Director is: " << director << endl;
    cout << "Rating is: " << rating << endl;
    cout << "Duration is: " << duration << endl;
}
movie::~movie(void) {
    delete director;
}
