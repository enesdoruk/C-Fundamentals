#include <iostream>
#include <array>

using namespace std;

void staticArrayInit();
void automaticArrayInit();
const size_t arraySize = 3;

int main(){
	cout << " first call" << endl;
	staticArrayInit();
	automaticArrayInit();

	cout << "secon call " << endl;
	staticArrayInit();
	automaticArrayInit();

}

void staticArrayInit(void) {
	static  array <int, arraySize > array1;

	for (size_t i = 0; i < array1.size(); ++i) {
		cout << "array[" << i << "]= " << array1[i] << " ";
	}

	cout << "values existing" << endl;

	for (size_t j = 0; j < array1.size(); ++j) {
		cout << "array[" << j << "]= " << (array1[j] += 5) << " ";
	}
}

void automaticArrayInit(void) {
	array <int, arraySize> array2 = { 1,2,3 };
	
	cout << "existing" << endl;

	for (size_t i = 0; i < array2.size(); ++i) {
		cout << "array[" << i << "]= " << array2[i] << " ";
	}

	cout << "values existing" << endl;

	for (size_t j = 0; j < array2.size(); ++j) {
		cout << "array[" << j << "]= " << (array2[j] += 5) << " ";
	}
}