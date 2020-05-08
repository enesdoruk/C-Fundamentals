#include <iostream>
#include<iomanip>
#include<array>

using namespace std;

int main() {

	array <int, 5> n = {37, 24, 64, 18, 95};

	cout << "Element" << setw(13) << "value" << endl;

	for (size_t i = 0; i < n.size(); ++i) {
		cout << setw(7) << i << setw(13) << n[i] << endl;
	}


}

