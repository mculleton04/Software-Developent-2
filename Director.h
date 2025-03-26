//file containing interface for Director class
#ifndef _Director_
#define _Director_
#include <string>
using namespace std;

class Director  { //lab2 - declare a base/parent/super class
  private: 
    string name; 
    int nofFilms;
    int earnings;	

  public:
    Director(); // default parameterless constructor 
    Director(string); // user-defined overloaded constructor with 1 parameters
    Director(string, int); // user-defined overloaded constructor with 2 parameters

    void setName(string);
    void setNofFilms(int);
    void setEarnings(int);

    string getName();
    int getNofFilms();
    int getEarnings();

    void displayDetails(); //lab3 - part1: parent class verion of displayDetails() function (comment this out for part 3)
    //virtual void displayDetails(); // comment this in for lab3 - part3: parent class verion of displayDetails() function & comment out for part 4
    //virtual void displayDetails() = 0; //comment this in for lab3 - part4: - mark the functions as a pure virtual function
                                          //lab3 - part4: - this means that the class will now be abstract
                                          //lab3 - part4: - it will not be possible to create objects of this class
};

#endif /* _Director_ */
