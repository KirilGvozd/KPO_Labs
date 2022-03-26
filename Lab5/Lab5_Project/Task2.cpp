#include <iostream>

using namespace std;

typedef unsigned char First_Name;
typedef unsigned char Last_name;
typedef unsigned char Day;
typedef unsigned char Month;
typedef short int Year;
typedef unsigned char Passport_number;
typedef unsigned char Sex;
typedef short int List_of_Accounts;

struct Accountant
{
	First_Name f_n;
	Last_name l_n;
	Day dd;
	Month mm;
	Year yyyy;
	Passport_number id_number;
	Sex two_genders;
	List_of_Accounts number_of_lists;
};

bool operator ==(Accountant Date1, Accountant Date2) {
	if ((Date1.dd == Date2.dd) && (Date1.mm == Date2.mm) && (Date1.yyyy == Date2.yyyy))
		return true;
	else
		return false;
}

bool operator <(Accountant Date1, Accountant Date2) {
	if ((Date1.yyyy < Date2.yyyy) || (Date1.yyyy == Date2.yyyy) && (Date1.mm < Date2.mm) || (Date1.yyyy == Date2.yyyy) && (Date1.mm == Date2.mm) && (Date1.dd < Date2.dd))
		return true;
	else return false;
}

bool operator >(Accountant Date1, Accountant Date2) {
	if ((Date1.yyyy > Date2.yyyy) || (Date1.yyyy == Date2.yyyy) && (Date1.mm > Date2.mm) || (Date1.yyyy == Date2.yyyy) && (Date1.mm == Date2.mm) && (Date1.dd == Date2.dd))
		return true;
	else return false;
}

int main() {
	Accountant first = { 'K' ,'G', 20, 12, 2003, 2738122, 'Male', 2};
	Accountant second = { 'A', 'K', 27, 9, 2003, 1320903, 'Male', 1 };
	
	if (first > second)
		cout << "It's true." << endl;
	else
		cout << "It's false." << endl;
	
	if (first == second)
		cout << "It's true." << endl;
	else
		cout << "It's false." << endl;
	
	if (first < second)
		cout << "It's true." << endl;
	else
		cout << "It's false." << endl;
}