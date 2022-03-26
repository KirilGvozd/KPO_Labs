#include <iomanip>
#include <iostream>

using namespace std;

	typedef unsigned char day;
	typedef unsigned char month;
	typedef unsigned short year;
	struct Date
	{
		day dd;
		month mm;
		year yyyy;
	};

	bool operator ==(Date d1, Date d2) {
		if ((d1.yyyy == d2.yyyy) && (d1.mm == d2.mm) && (d1.dd == d2.dd))
			return true;
		else return false;
	}
	
	bool operator <(Date d1, Date d2) {
		if ((d1.yyyy < d2.yyyy) || (d1.yyyy == d2.yyyy) && (d1.mm < d2.mm) || (d1.yyyy == d2.yyyy) && (d1.mm == d2.mm) && (d1.dd < d2.dd))
			return true;
		else return false;
	}

	bool operator >(Date d1, Date d2) {
		if ((d1.yyyy > d2.yyyy) || (d1.yyyy == d2.yyyy) && (d1.mm > d2.mm) || (d1.yyyy == d2.yyyy) && (d1.mm == d2.mm) && (d1.dd == d2.dd))
			return true;
		else return false;
	}

	int main() {
		Date date1 = { 7,1,1990 };
		Date date2 = { 8,2,1991 };
		Date date3 = { 7,1,1990 };
		if (date1 < date2)
			cout << "It's true." << endl;
		else
			cout << "It's false" << endl;
		
		if (date1 == date3) 
			cout << "It's true." << endl;
		else
			cout << "It's false." << endl;

		if (date2 < date3)
			cout << "It's true" << endl;
		else 
			cout << "It's false" << endl;	
	}