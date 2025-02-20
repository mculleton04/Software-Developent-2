//This file contains the implementation code for the WatchlistType class data member functions
#include "WatchlistType.h"

#include <iostream>
#include <string>

using namespace std;

WatchlistType::WatchlistType() {}

WatchlistType::WatchlistType(string n) {
	name = n;
}

WatchlistType::WatchlistType(string n, int d) : name(n), duration(d)
{ // lab3 - part2 : constructor that uses member initializer list
}

void WatchlistType::setName(string n)
{
	name = n;
}

string WatchlistType::getName()
{
	return name;
}

void WatchlistType::setDuration(int d)
{
	if (d < 2 || d > 6){
		cout<<"duration should be between 2 and 6 - setting the duration to its default value of 2"<<endl;
		duration = 2;
	} else {
		duration = d;
	}
}

int WatchlistType::getDuration()
{
	return duration;
}

//lab3 - Part3: Comment out this implementation of displayDetails for part 4 as it is marked a pure virtual function .h for part 4
void WatchlistType::displayDetails()

{
	cout << "WatchlistType : " << getName() << " has a duration of " << getDuration() << " minutes" << endl;
}