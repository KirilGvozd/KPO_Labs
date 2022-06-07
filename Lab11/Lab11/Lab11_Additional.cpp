#include <iostream>

using namespace std;

int main() {
	int x;
	cout << "Enter x: "; cin >> x;
	auto lambda_1 = [x]() {
		if (x > 0)
			return true;
		else
			return false;
	};
	if (lambda_1() == true)
		cout << "The number is positive." << endl;
	else
		cout << "The number is negative or equals 0." << endl;
}