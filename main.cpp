#include <iostream>
#include "WatchlistType.h"
#include "Movie.h"
#include "TVshow.h"
#include "Director.h"
#include "Watchlist.h"
using namespace std; 
//test final version
int main() {
	WatchlistType pli; //comment this out for part 4 as is is not possible to instantiate an abstract class (i.e. a class containing a pure virtual function)
	pli.displayDetails();


	Movie s1; //creates a Movie object, s1, using the default Movie constructor
	s1.setName("Pulp Fiction");
	s1.setDuration(4);
	s1.setDirectorName("Quintin Tarantino");

	Movie s2("Interstellar", 1, "Christopher Nolan"); // creates a Movie object, s2 using the overloaded Movie constructor

	//display the Movie' details using the overridden displayDetails function
	//s1.displayDetails();
	//s2.displayDetails();

	TVshow pc1("Breaking Bad", 4, 12);
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
//hey
