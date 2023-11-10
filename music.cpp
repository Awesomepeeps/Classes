#include <iostream>
#include <cstring>
#include "music.h"

using namespace std;

music::music(void) {
    artist = new char(80);
    publisher = new char(80);
}
char *music::getArtist() {
    return artist;
}
void music::setArtist(char* newArtist) {;
    strcpy(artist, newArtist);    
}
char *music::getPublisher() {
    return publisher;
}
void music::setPublisher(char* newPublisher) {
    strcpy(publisher, newPublisher);    
}
int music::getDuration() {
    return duration;
}
void music::setDuration(int newDuration) {
    duration = newDuration;
}
void music::printAll(void) {
    cout << "Title is: " << title << endl;
    cout << "Year is: " << year << endl;
    cout << "Publisher is: " << publisher << endl;
    cout << "Artist is: " << artist << endl;
    cout << "Durtation is: " << duration << endl;
}
music::~music(void) {
    delete artist;
    delete publisher;
}