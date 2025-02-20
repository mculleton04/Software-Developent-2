//file containing interface for TVshows class
#ifndef _TVshows_
#define _TVshows_
#include <string>
#include "WatchlistType.h"

using namespace std;

class TVshows : public WatchlistType
{ // lab2 - declare a child/derived/sub class that inherites from the parent WatchlistType class
private:
  int episodeNumber;

public:
  TVshows();
  TVshows(string, int); // user-defined overloaded constructor with one parameter

  TVshows(string, int , int); 

  void setEpisodeNumber(int);

  int getEpisodeNumber();

  void displayDetails(); // lab3 - Part1: - overriding the abstract function from the parent class
};

#endif /* _TVshows_ */
