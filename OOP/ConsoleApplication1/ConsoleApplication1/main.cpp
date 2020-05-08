#include <iostream>
#include <iomanip>
#include "CommissionEmployee.h"

using namespace std;

int main() {
	CommissionEmployee employee1("sue", "hones", "222-222-22-22", 10000, .06);

	cout << fixed << setprecision(2);

	cout << "first Name " << employee1.getFirstName()
		<< endl << "last name" << employee1.getLastName()
		<< endl << "security no " << employee1.getSocialSecurityNumber()
		<< endl << " gross sales" << employee1.getGrossSales()
		<< endl << "com rate" << employee1.getCommissionRate() << endl;

	employee1.setGrossSales(8000);
	employee1.setCommissionRate(.1);

	employee1.print();

	cout << "earnings   " << employee1.earnings() << endl;
}