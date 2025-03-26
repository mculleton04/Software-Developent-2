#include "Watchlist.h"
#include <iostream>
using namespace std;


Watchlist::Watchlist(string n, int nofItems) : maxNofItems(nofItems) { //lab4 - part4: initialising the constant variable in the constructor initialisation list
	                                                                 //once this variable is assigned an initial value for a Watchlist object that value CANNOT be changed
	setWatchlistName(n);
}

string Watchlist::getWatchlistName() {
	return watchlistName;
}

void Watchlist::setWatchlistName(string n) {
	watchlistName = n;
}

void Watchlist::addItem(WatchlistType pli) {
	if (items.size() <= maxNofItems) { //check if Watchlist is at full capacity
		items.push_back(pli);
    } else {
    	cout<<"Watchlist is full"<<endl;
    }
}

void Watchlist::display() {
	//cout << "The " <<Movie::getNofMovies() <<" songs in the Watchlist are: " <<endl;
	cout<<getWatchlistName()<<" contains: "<<endl;
	for (int i=0; i<items.size(); i++) {
		items[i].displayDetails();
	}
	cout << "max nof items allowed in this watchlist is : " << maxNofItems << endl; // lab4 - part3: Update the display to show the value of this constant
	std::cout << '\n';
}
