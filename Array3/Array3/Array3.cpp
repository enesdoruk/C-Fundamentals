#include <iostream>
#include <array>

using namespace std;

int main(){
	array< int, 5 > items = { 1,2,3,4,5 };

	cout << " items before modification" << endl;

	for (int item : items)
		cout << "item" << item << endl;

	for (int &itemRef : items)
		itemRef *= 2;

	cout << "after modification" << endl;

	for (int item : items)
		cout << "items" << item << endl;
}

