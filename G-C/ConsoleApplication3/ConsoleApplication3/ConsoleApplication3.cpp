#include <iostream>

using namespace std;

int main(){

	const int size = 80;

	char buffer[size];

	cout << "enter a sentence" << endl;

	cin.read(buffer, 20);

	cout << endl << "entered sentence " << endl;

	cout.write(buffer, cin.gcount());

	cout << endl;
}

