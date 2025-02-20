//This file contains the implementation code for the Movies class data member functions
#include "Movies.h"

#include <iostream>
#include <string>

using namespace std;

// implementation class for Movies
#include "Movies.h"

#include <iostream>
using namespace std;

Movies::Movies() {}

Movies::Movies(string n) : WatchlistType(n)
{ // lab3 - part2 : constructor that uses member initializer list to call the parent class constructor from the child class
}

Movies::Movies(string n, int d, string an) : WatchlistType(n, d)
{ // lab3 - part2 : constructor that uses member initializer list to call the parent class constructor from the child class
	artistName = an;
}

void Movies::setArtistName(string art)
{
	artistName = art;
}

string Movies::getArtistName()
{
	return artistName;
}

// lab2 - overriding abstract function defined in parent class
void Movies::displayDetails()
{
	//WatchlistType::displayDetails();
	cout << "Movies : " << getName() << " by " << getArtistName() << " has a duration of " << getDuration() << " minutes" << endl;
}
