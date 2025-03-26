//This file contains the implementation code for the Movie class data member functions
#include "Movie.h"

#include <iostream>
#include <string>

using namespace std;

// implementation class for Movie
#include "Movie.h"

#include <iostream>
using namespace std;

Movie::Movie() {}

Movie::Movie(string n) : WatchlistType(n)
{ // lab3 - part2 : constructor that uses member initializer list to call the parent class constructor from the child class
}

Movie::Movie(string n, int d, string an) : WatchlistType(n, d)
{ // lab3 - part2 : constructor that uses member initializer list to call the parent class constructor from the child class
	DirectorName = an;
}

void Movie::setDirectorName(string art)
{
	DirectorName = art;
}

string Movie::getDirectorName()
{
	return DirectorName;
}

// lab2 - overriding abstract function defined in parent class
void Movie::displayDetails()
{
	//WatchlistType::displayDetails();
	cout << "Movie : " << getName() << " by " << getDirectorName() << " has a duration of " << getDuration() << " minutes" << endl;
}
