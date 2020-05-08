#include <iostream>

using namespace std;

int main(){

	const char *const word = "again";

	cout << "value word is " << word << endl << "static cast  "<< static_cast < const void * > (word) << endl;
	cout << endl;

	cout.put('A');
}
