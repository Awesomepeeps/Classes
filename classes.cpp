//  This is a program that allows you to make a database of videos, movies, and music, search through it, and then delete items from it
//  Created by: Nikaansh S.
//  Last Edited: 11/9/23

#include <iostream>
#include <cstring>
#include <vector>
#include "Parent.h"
#include "Movie.h"
#include "Video.h"
#include "Music.h"

using namespace std;

int main (void) {
    // Creates the vector as well as a bunch of varaibles to hold the inputs
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

    // Starts loop to continuously run through the code
    while (true) {
        cout << "Do you want to add, search, delete, or quit?" << endl;
        cin >> input;
        if (strcmp(input, "quit") == 0) { // Checks if input is "quit" to end program
            break;
        }   
        if (strcmp(input, "add") == 0) { // Checks if input is "add"
            cout << "What media type? (video, music, or movie)" << endl;
            cin >> type;
            if (strcmp(type, "video") == 0) { // Adds a "video" to the vector database
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
            else if (strcmp(type, "music") == 0) { // Adds a "music" to the vecor database
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
            else if (strcmp(type, "movie") == 0) { // Adds a "movie" to the vector database
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
        else if (strcmp(input, "search") == 0) { // Checks if the user inputted "search"
            cout << "Title or year search (all lowercase)?" << endl;
            cin >> search;
            if (strcmp(search, "title") == 0) { // Checks if they want to search by title
                cout << "What is the title?" << endl;
                cin >> title;
		cout << endl;
                vector<parent*>::iterator iter = database.begin(); // Gets vector iterator
                for(iter; iter < database.end(); iter++) { // Iterates through iterator
                    if (strcmp((*iter)->getTitle(), title) == 0) { // Compares ith term's title to input by user
                        (*iter)->printAll();
			cout << endl;
                    }
                }
            }
            else if (strcmp(search, "year") == 0) { // Checks if they want to search by year
                cout << "What is the year?" << endl;
                cin >> year;
		cout << endl;
                vector<parent*>::iterator iter = database.begin(); // Gets vector iterator
                for(iter; iter < database.end(); iter++) { // Iterates through iterator
                    if ((*iter)->getYear() == year) { // Compates ith term's year to input
                        (*iter)->printAll();
			cout << endl;
                    }
                }
            }
        }
        else if (strcmp(input, "delete") == 0) {
            cout << "Title or year delete (all lowercase)?" << endl;
            cin >> search;
            if (strcmp(search, "title") == 0) {
                cout << "What is the title?" << endl;
                cin >> title;
                vector<parent*>::iterator iter = database.begin();
                for(iter; iter < database.end(); iter++) {
                    if (strcmp((*iter)->getTitle(), title) == 0) {
                        database.erase(iter);
                    }
                }
            }
            else if (strcmp(search, "year") == 0) {
                cout << "What is the year?" << endl;
                cin >> year;
                vector<parent*>::iterator iter = database.begin();
                for(iter; iter < database.end(); iter++) {
                    if ((*iter)->getYear() == year) {
                        database.erase(iter);
                    }
                }
            }
        }
    }

    //Frees all space
    delete input;
    delete artist;
    delete director;
    delete search;
    delete type;
    delete title;
    delete publisher;
    database.clear();
}
