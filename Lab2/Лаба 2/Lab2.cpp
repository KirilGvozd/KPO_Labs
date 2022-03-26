#include "Lab2.h"

int sum(int first_number, int second_number);
int sub(int first_number, int second_number);
int mul(int first_number, int second_number);

using namespace std;

int main() {
	int first_number, second_number;
	cout << "Enter the first number: "; cin >> first_number;
	cout << "Enter the second number: "; cin >> second_number;
	cout << "The sum of your numbers is: " << sum(first_number, second_number) << endl;
	cout << "The difference between your numbers is: " << sub(first_number, second_number) << endl;
	cout << "The multiplying of your numbers is: " << mul(first_number, second_number) << endl;
}