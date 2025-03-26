//file containing interface for TVshow class
#ifndef _TVshow_
#define _TVshow_
#include <string>
#include "WatchlistType.h"

using namespace std;

class TVshow : public WatchlistType
{ // lab2 - declare a child/derived/sub class that inherites from the parent WatchlistType class
private:
  int episodeNumber;

public:
  TVshow();
  TVshow(string, int); // user-defined overloaded constructor with one parameter

  TVshow(string, int , int); 

  void setEpisodeNumber(int);

  int getEpisodeNumber();

  void displayDetails(); // lab3 - Part1: - overriding the abstract function from the parent class
};

#endif /* _TVshow_ */
