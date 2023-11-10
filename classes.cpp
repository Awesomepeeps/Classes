#include <iostream>
#include <cstring>
#include <vector>
#include "Parent.cpp"
#include "Movie.cpp"
#include "Video.cpp"
#include "Music.cpp"

using namespace std;

int main (void) {
    vector<parent*> database;
    char* input = new char(10);
    char* type = new char(10);
    char* title = new char(80);
    char* publisher = new char(80);
    int rating = 0;
    char* artist = new char(80);
    int duration = 0;
    char* director = new char(80);
    int year = 0;
    char* search = new char(15);
    while (true) {
        cout << "Do you want to add, search, delete, or quit?" << endl;
        cin >> input;
        if (strcmp(input, "quit") == 0) {
            break;
        }   
        if (strcmp(input, "add") == 0) {
            cout << "input/add: " << input << endl;
            cout << "What media type? (video, music, or movie)" << endl;
            cin >> type;
            if (strcmp(type, "video") == 0) {
                video* store = new video();
                cout << "What is the title?" << endl;
                cin >> title;
                cout << "What is the year?" << endl;
                cin >> year;
                cout << "Who is the publisher" << endl;
                cin >> publisher;
                cout << "What is the rating" << endl;
                cin >> rating;
                store->setTitle(title);
                store->setYear(year);
                store->setPublisher(publisher);
                store->setRating(rating);
                database.push_back(store);
            }
            else if (strcmp(type, "music") == 0) {
                music* disk = new music();
                cout << "What is the title?" << endl;
                cin >> title;
                cout << "What is the year? "<< endl;
                cin >> year;
                cout << "Who is the artist?" << endl;
                cin >> artist;
                cout << "What is the duration" << endl;
                cin >> duration;
                cout << "Who is the publisher" << endl;
                cin >> publisher;
                disk->setTitle(title);
                disk->setYear(year);
                disk->setArtist(artist);
                disk->setDuration(duration);
                disk->setPublisher(publisher);
                database.push_back(disk);
            }
            else if (strcmp(type, "movie") == 0) {
                movie* popcorn = new movie();
                cout << "What is the title" << endl;
                cin >> title;
                cout << "Who is the director" << endl;
                cin >> director;
                cout << "What is the year?" << endl;
                cin >> year;
                cout << "What is the duration?" << endl;
                cin >> duration;
                cout << "What is the rating?" << endl;
                cin >> rating;
                popcorn->setTitle(title);
                popcorn->setDirector(director);
                popcorn->setYear(year);
                popcorn->setDuration(duration);
                popcorn->setRating(rating);
                database.push_back(popcorn);
            }
        }
        else if (strcmp(input, "search") == 0) {
            cout << "title or year search" << endl;
            cin >> search;
            cout << "This is search: " << search << endl;
            if (strcmp(search, "title") == 0) {
                cout << "What is the title?" << endl;
                cin >> title;
                vector<parent*>::iterator iter = database.begin();
                for(iter; iter < database.end(); iter++) {
                    if (strcmp((*iter)->getTitle(), title) == 0) {
                        (*iter)->printAll();
                    }
                }
            }
            else if (strcmp(search, "year") == 0) {
                cout << "in year" << endl;
                cout << "What is the year?" << endl;
                cin >> year;
                vector<parent*>::iterator iter = database.begin();
                for(iter; iter < database.end(); iter++) {
                    if ((*iter)->getYear() == year) {
                        (*iter)->printAll();
                    }
                }
            }
        }
        else if (strcmp(input, "delete") == 0) {
            cout << "title or year search" << endl;
            cin >> search;
            if (strcmp(search, "title") == 0) {
                cout << "What is the title?" << endl;
                cin >> title;
                vector<parent*>::iterator iter = database.begin();
                for(iter; iter < database.end(); iter++) {
                    if (strcmp((*iter)->getTitle(), title) == 0) {
                        (*iter)->printAll();
                    }
                }
            }
            else if (strcmp(search, "year") == 0) {
                cout << "What is the year?" << endl;
                cin >> year;
                vector<parent*>::iterator iter = database.begin();
                for(iter; iter < database.end(); iter++) {
                    if ((*iter)->getYear() == year) {
                        (*iter)->printAll();
                    }
                }
            }
        }
    }
    database.clear();
}