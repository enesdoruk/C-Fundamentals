#include <iostream>
#include < array> 
#include "helper.h"

using namespace std;

int main(){

	array < array < int, GradeBook::tests >, GradeBook::students > grades =
	{ 87,96,70,
	  68,23,43,
	  43,45,75,
	  23,75,23,
	  15,65,43,
	  87,42,43,
	  34,76,44,
	  87,65,87,
	  14,65,45,
	  95,64,75 };

	GradeBook myGradeBook(
		"CS PROGRAMMING", grades);
	myGradeBook.displayMessage();
	myGradeBook.processGrades();
}

