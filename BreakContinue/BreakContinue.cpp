#include <iostream>

using namespace std;

int main() {
	
	unsigned int count; //dongu bittikten sonradd kullanilacak
	
	for ( count = 1; count <= 10; ++count){
	
	if (5 == count)
		break;
	cout << count << " ";
	}
	cout << "Broke out of loop" << count << endl;
	}

