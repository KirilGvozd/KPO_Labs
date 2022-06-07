#include <iostream>
#include "Call.h"

using namespace std;
using namespace Call;

int main() {
	int x, y, z, a;
	cout << "Enter first number: "; cin >> x;
	cout << "Enter second number: "; cin >> y;
	cout << "Enter third number: "; cin >> z;
	cout << "Enter fourth number: "; cin >> a;
	cout << "\nDemonstration of cdevl: " << cdevl(x, y, z);
	cout << "\nDemonstration of cstd: " << cstd(x, y, z);
	cout << "\nDemonstation of cfst: " << cfst(x, y, z, a) << endl;
}