//file containing interface for Watchlist class
#ifndef _WATCHLIST_
#define _WATCHLIST_
#include <string>
#include <vector>

#include "Movie.h"
using namespace std;

class Watchlist { //lab4 - part1:
    private: //data member variables declared here
        string watchlistName;
		vector<WatchlistType> items; //lab4 - part3: reference to a vector of Movie objects - implements a 1:0..M aggregation relationship between the Watchlist & Movie classes
        const int maxNofItems; //lab4 - part4: declaring a constant variable, this variable will be initalised in the constructor initializer list in the Watchlist.cpp file

    public: //data member functions declared here
        Watchlist(string, int);
		string getWatchlistName();
		void setWatchlistName(string n);

		void addItem(WatchlistType p); //lab4 - part3: adding a function to allow WatchlistType objects to be added to the Watchlist's vector
        void display();
};

#endif /* _WATCHLIST_ */

