#include "Function1.h"
#include<iostream>

using namespace std;

Function1::Function1(string name)
		:maximumGrade(0)
		{
			
			setCourseName(name);
		}
	
void Function1::setCourseName(string name)
{
	if (name.size() <= 25)
		courseName =name;
	else{
		courseName = name.substr(0, 25);
		cerr << "name" << name << "max length(25)" << endl;
		
		
	}
	}	
string Function1::getCourseName() const
{
	return courseName;
}

void Function1::displayMessage() const
{
	cout << "grade book" << getCourseName() << "\n" <<endl;
}

void Function1::inputgrades(){
	
	int grade1;
	int grade2;
	int grade3;
	
	cout << "enter Integer";
	cin >> grade1 >> grade2 >> grade3;
	
	maximumGrade = maximum(grade1, grade2, grade3);
	
}

int Function1::maximum(int x, int y, int z) const {

int maximumValue = x;

if (y > maximumValue)
	maximumValue = y;

if (z > maximumValue)
	maximumValue = z;
	
return maximumValue;

}

void Function1::displayGradeReport() const{

cout << "maximum grade is entered" << endl;
}
