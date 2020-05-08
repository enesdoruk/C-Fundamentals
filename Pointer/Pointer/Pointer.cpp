#include <iostream>

using namespace std;

int main(){
	
	int a = 7;
	int *aPtr = &a;
	cout << "a adress " << &a << " aptr value " << aPtr << " a value" << a << "*aPtr value " << *aPtr;
}
