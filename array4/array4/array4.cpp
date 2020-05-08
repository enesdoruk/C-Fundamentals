#include <iostream>
#include <iomanip>
#include <array>
#include <algorithm>
#include <string>

using namespace std;

int main(){
	const size_t arraySize = 7;
	array < string, arraySize> colors = { "indigo", "blue", "orange", "purple", "yellow",
											"black", "brown" };

	cout << "unsorted" << endl;
	for (string color : colors)
		cout << "color=  " << color << endl;

	sort( colors.begin(), colors.end() );

	cout << "after sorted    " << endl;
	for (string item : colors)
		cout << "color    " << item << endl;

	bool found = binary_search( colors.begin(), colors.end(), "indigo" );
	cout << "found indigo    " << found << endl;

	found = binary_search(colors.begin(), colors.end(), "blue" );
	cout << "found blue   " << found << endl;
}

