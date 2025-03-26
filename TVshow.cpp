//This file contains the implementation code for the TVshow class data member functions
#include "TVshow.h"
#include <iostream>
#include <string>
using namespace std;

TVshow::TVshow() {}

TVshow::TVshow(string n, int en) : WatchlistType(n)
{
	episodeNumber = en;
}

TVshow::TVshow(string n, int d, int en) : WatchlistType(n, d)
{
	episodeNumber = en;
}

void TVshow::setEpisodeNumber(int en)
{
	if (en < 1){
		cout<<"episode number should be greater than 0 - setting the episodeNumber to its default value of 1"<<endl;
		episodeNumber = 1;
	} else {
		episodeNumber = en;
	}
}

int TVshow::getEpisodeNumber()
{
	return episodeNumber;
}

void TVshow::displayDetails()
{
	cout << "TVshow : " << getName() <<", episode number" << episodeNumber << ", has a duration of " << getDuration() << " minutes" << endl;
}
