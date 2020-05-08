#ifndef FUNCTION1_H
#define FUNCTION1_H
#include<string>

class Function1
{
	public:
		explicit Function1(std::string);
		void setCourseName(std::string);
		std::string getCourseName() const;
		
		void displayMessage() const;
		void inputgrades();
		void displayGradeReport() const;
		
		int maximum(int, int, int) const;

	private:
		std::string courseName;
		int maximumGrade;
		
};

#endif
