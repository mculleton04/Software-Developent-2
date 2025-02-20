//This file contains the implementation code for the TVshows class data member functions
#include "TVshows.h"
#include <iostream>
#include <string>
using namespace std;

TVshows::TVshows() {}

TVshows::TVshows(string n, int en) : WatchlistType(n)
{
	episodeNumber = en;
}

TVshows::TVshows(string n, int d, int en) : WatchlistType(n, d)
{
	episodeNumber = en;
}

void TVshows::setEpisodeNumber(int en)
{
	if (en < 1){
		cout<<"episode number should be greater than 0 - setting the episodeNumber to its default value of 1"<<endl;
		episodeNumber = 1;
	} else {
		episodeNumber = en;
	}
}

int TVshows::getEpisodeNumber()
{
	return episodeNumber;
}

void TVshows::displayDetails()
{
	cout << "TVshows : " << getName() <<", episode number" << episodeNumber << ", has a duration of " << getDuration() << " minutes" << endl;
}
