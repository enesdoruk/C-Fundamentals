#include <iostream>

using namespace std;

unsigned int boxVolume(unsigned int length = 1, unsigned int height = 1, unsigned int width = 1);

int main()
{
	cout << "Default volume" << boxVolume() << endl;
	cout << "length 10" << boxVolume(10) << endl;
	cout << "length 10 height 5" << boxVolume(10, 5) << endl;
	cout << "length 10 height 5 width 2 " << boxVolume(10, 5, 2) << endl;
}

unsigned int boxVolume(unsigned int length, unsigned int height, unsigned int width) {
	return length * width * height;
}