//This file contains the implementation code for the Director class data member functions
#include "Director.h"

#include <iostream>
#include <string>

using namespace std;

Director::Director() {}

Director::Director(string n) {
	name = n;
}

Director::Director(string n, int d) : name(n), nofFilms(d)
{ // lab3 - part2 : constructor that uses member initializer list
}

void Director::setName(string n)
{
	name = n;
}

string Director::getName()
{
	return name;
}

void Director::setNofFilms(int d)
{
	if (d < 2 || d > 6){
		cout<<"noffilms should be between 2 and 6 - setting the noffilms to its default value of 2"<<endl;
		nofFilms = 2;
	} else {
		nofFilms = d;
	}
}

int Director::getNofFilms()
{
	return nofFilms;
}

//lab3 - Part3: Comment out this implementation of displayDetails for part 4 as it is marked a pure virtual function .h for part 4
void Director::displayDetails()

{
	cout << "Director : " << getName() << " has a noffilms of " << getNofFilms() << " minutes" << endl;
}