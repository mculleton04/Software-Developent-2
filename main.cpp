#include <iostream>
#include "WatchlistType.h"
#include "Movies.h"
#include "TVshows.h"
using namespace std; 

int main() {
	WatchlistType pli; //comment this out for part 4 as is is not possible to instantiate an abstract class (i.e. a class containing a pure virtual function)
	pli.displayDetails();


	Movies s1; //creates a Movies object, s1, using the default Movies constructor
	s1.setName("Nothing compares 2u");
	s1.setDuration(4);
	s1.setArtistName("Sinead O'Connor");

	Movies s2("September Fields", 1, "Frazey Ford"); // creates a Movies object, s2 using the overloaded Movies constructor

	//display the Moviess' details using the overridden displayDetails function
	//s1.displayDetails();
	//s2.displayDetails();

	TVshows pc1("The rest is politics", 4, 12);
	//pc1.displayDetails();

	//part 3 & part 4 code
	/*WatchlistType *pliPtr; //create a pointer for the WatchlistType class
	pliPtr = &s1; //assign an address of a child object (s1) to it
	pliPtr->displayDetails(); //call the overriddent function displayDeatils with the pointer

	pliPtr = &pc1;			  // assign an address of a child object (s1) to it
	pliPtr->displayDetails(); // call the overriddent function displayDeatils with the pointer

	
	WatchlistType *pliP[3]; // create an array of pointers
	pliP[0] = &s1;		   // add pointers to the parent and child class objects into it
	pliP[1] = &pc1;
	pliP[2] = &s2;
	//pliP[3] = &pli;

	// loop through the array of pointers
	for (int i = 0; i < 3; i++)
	{
		pliP[i]->displayDetails(); // this polymorphic line of code calls different versions
									// the overridden function depending on which type of
									// object is being accessed
	}	*/	
			
}