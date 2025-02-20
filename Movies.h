//file containing interface for Movies class
#ifndef _MOVIES_
#define _MOVIES_
#include <string>
#include "WatchlistType.h"

using namespace std;

class Movies : public WatchlistType
{ // lab2 - declare a child/derived/sub class that inherites from the parent WatchlistType class
private:
  string artistName;

public:
  Movies(); //default parameterless constructor
  Movies(string name); // user-defined overloaded constructor with 1 parameter
  Movies(string name, int duration, string artistName); // user-defined overloaded constructor with 3 paramters

  void setArtistName(string);
  string getArtistName();

  void displayDetails(); //lab3 - Part1: - overriding the abstract function from the parent class
};

#endif /* _MOVIES_ */
