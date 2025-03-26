//file containing interface for WatchlistType class
#ifndef _WatchlistType_
#define _WatchlistType_
#include <string>
using namespace std;

class WatchlistType  { //lab2 - declare a base/parent/super class
  private: 
    string name; 
    int duration;

  public:
    WatchlistType(); // default parameterless constructor 
    WatchlistType(string); // user-defined overloaded constructor with 1 parameters
    WatchlistType(string, int); // user-defined overloaded constructor with 2 parameters

    void setName(string);
    void setDuration(int);

    string getName();
    int getDuration();

    void displayDetails(); //lab3 - part1: parent class verion of displayDetails() function (comment this out for part 3)
    //virtual void displayDetails(); // comment this in for lab3 - part3: parent class verion of displayDetails() function & comment out for part 4
    //virtual void displayDetails() = 0; //comment this in for lab3 - part4: - mark the functions as a pure virtual function
                                          //lab3 - part4: - this means that the class will now be abstract
                                          //lab3 - part4: - it will not be possible to create objects of this class
};
bool operator==(WatchlistType&, WatchlistType&);
bool operator!=(WatchlistType&, WatchlistType&);
bool operator<(WatchlistType&, WatchlistType&);
bool operator>(WatchlistType&, WatchlistType&);
bool operator<=(WatchlistType&, WatchlistType&);
bool operator>=(WatchlistType&, WatchlistType&);

#endif /* _WatchlistType_ */
