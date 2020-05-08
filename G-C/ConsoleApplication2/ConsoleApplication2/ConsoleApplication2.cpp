#include <iostream>

using namespace std;

int main(){
	int caracter;

	cout << "before input" << cin.eof() << endl << "after enter" << endl;

	while ((caracter = cin.get()) != EOF)
		cout.put(caracter);

	cout << "in this system" << caracter << endl;
	cout << "after input of EOF" << cin.eof() << endl;

}

