//file containing interface for Movie class
#ifndef _Movie_
#define _Movie_
#include <string>
#include "WatchlistType.h"

using namespace std;

class Movie : public WatchlistType
{ // lab2 - declare a child/derived/sub class that inherites from the parent WatchlistType class
private:
  string DirectorName;

public:
  Movie(); //default parameterless constructor
  Movie(string name); // user-defined overloaded constructor with 1 parameter
  Movie(string name, int duration, string DirectorName); // user-defined overloaded constructor with 3 paramters

  void setDirectorName(string);
  string getDirectorName();

  void displayDetails(); //lab3 - Part1: - overriding the abstract function from the parent class
};

#endif /* _Movie_ */
