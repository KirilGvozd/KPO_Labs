#include <iostream>
#include <cmath>
using namespace std;

bool leap_year(int year);
int number_of_day(int day, int month, int year, bool leap_year_check);
void month_name(int month);
void programmers_day(bool leap_year_check, int year);

int main() {
	setlocale(LC_ALL, "rus");
	int day, month, year;
	int my_birthday_leap_year = 355;
	int my_birthday_not_leap_year = 354;
	for (;;) {
		cout << "\nВведите год в формате ГГГГ(цифрами): "; cin >> year;
		if (!cin) {
			cout << "\nПомните, ни одного символа с клавиатуры!" << endl;
			cin.clear();
			cin.ignore(1000000, '\n');
		}
		else if (year <= 0) {
			cout << "\nГод должен быть нашей эры!" << endl;
			cin.clear();
			cin.ignore(1000000, '\n');
		}
		else
			break;
	}
	bool leap_year_february = leap_year(year);
	for (;;) {
		cout << "\nВведите месяц в формате ММ(цифрами): "; cin >> month;
		if (!cin) {
			cout << "\nИ помните, ни одного символа с клавиатуры!" << endl;
			cin.clear();
			cin.ignore(1000000, '\n');
		}
		else if (month < 1 || month>12) {
			cout << "\nНет такого месяца!" << endl;
			cin.clear();
			cin.ignore(1000000, '\n');
		}
		else
			break;
	}
	month_name(month);
	for (;;) {
		cout << "\nВведите день в формате ДД(цифрами): "; cin >> day;
		if (!cin) {
			cout << "\nИ помните, ни одного символа с клавиатуры!" << endl;
			cin.clear();
			cin.ignore(1000000, '\n');
		}
		else if (day <= 0) {
			cout << "\nНи в одном месяце нет такого дня!" << endl;
			cin.clear();
			cin.ignore(1000000, '\n');
		}
		else if ((month==1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) && day > 31) {
			cout << "\nВ этом месяце только 31 день!" << endl;
			cin.clear();
			cin.ignore(1000000, '\n');
		}
		else if (leap_year_february && month == 2 && day > 29) {
			cout << "\nВ високосном феврале только 29 дней!" << endl;
			cin.clear();
			cin.ignore(1000000, '\n');
		}
		else if (!leap_year_february && month == 2 && day > 28) {
			cout << "\nВ не високосном феврале только 28 дней!" << endl;
			cin.clear();
			cin.ignore(1000000, '\n');
		}
		else if ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30) {
			cout << "\nВ этом месяце только 30 дней!" << endl;
		}
		else
			break;
	}
	cout << "\nПорядковый номер дня в году: " << number_of_day(day, month, year, leap_year_february) << endl;
	int day_number = number_of_day(day, month, year, leap_year_february);
	if (leap_year_february) {
		day_number = my_birthday_leap_year - day_number;
	}
	else {
		day_number = my_birthday_not_leap_year - day_number;
	}
	day_number = abs(day_number);
	cout << "\nДней до моего дня рождения: " << day_number << endl;
	programmers_day(leap_year_february, year);
}

bool leap_year(int year) {
	if (year % 4 == 0) {
		if (year % 100 != 0) {
			cout << "\nГод високосный." << endl;
			return true;
		}
		else if (year % 100 == 0) {
			if (year % 400 != 0) {
				cout << "\nГод не високосный." << endl;
				return false;
			}
			else {
				cout << "\nГод високосный." << endl;
				return true;
			}
		}
		else {
			cout << "\nГод не високосный." << endl;
			return false;
		}
	}
	else {
		cout << "\nГод не високосный." << endl;
		return false;
	}
}

int number_of_day(int day, int month, int year, bool leap_year_check)	{
	if (month == 1) {
		return day;
	}
	if (month == 2) {
		return day + 31;
	}
	if (month == 3 && leap_year_check) {
		return day + 60;
	}
	if (month == 3 && !leap_year_check) {
		return day + 59;
	}
	if (month == 4 && leap_year_check) {
		return day + 91;
	}
	if (month == 4 && !leap_year_check) {
		return day + 90;
	}
	if (month == 5 && leap_year_check) {
		return day + 121;
	}
	if (month == 5 && !leap_year_check) {
		return day + 120;
	}
	if (month == 6 && leap_year_check) {
		return day + 152;
	}
	if (month == 6 && !leap_year_check) {
		return day + 151;
	}
	if (month == 7 && leap_year_check) {
		return day + 182;
	}
	if (month == 7 && !leap_year_check) {
		return day + 181;
	}
	if (month == 8 && leap_year_check) {
		return day + 213;
	}
	if (month == 8 && !leap_year_check) {
		return day + 212;
	}
	if (month == 9 && leap_year_check) {
		return day + 244;
	}
	if (month == 9 && !leap_year_check) {
		return day + 243;
	}
	if (month == 10 && leap_year_check) {
		return day + 274;
	}
	if (month == 10 && !leap_year_check) {
		return day + 273;
	}
	if (month == 11 && leap_year_check) {
		return day + 305;
	}
	if (month == 11 && !leap_year_check) {
		return day + 304;
	}
	if (month == 12 && leap_year_check) {
		return day + 335;
	}
	if (month == 12 && !leap_year_check) {
		return day + 334;
	}
}

void month_name(int month) {
	if (month == 1) {
		cout << "\nЯнварь" << endl;
	}
	else if (month == 2) {
		cout << "\nФевраль" << endl;
	}
	else if (month == 3) {
		cout << "\nМарт" << endl;
	}
	else if (month == 4) {
		cout << "\nАпрель" << endl;
	}
	else if (month == 5) {
		cout << "\nМай" << endl;
	}
	else if (month == 6) {
		cout << "\nИюнь" << endl;
	}
	else if (month == 7) {
		cout << "\nИюль" << endl;
	}
	else if (month == 8) {
		cout << "\nАвгуст" << endl;
	}
	else if (month == 9) {
		cout << "\nСентябрь" << endl;
	}
	else if (month == 10) {
		cout << "\nОктябрь" << endl;
	}
	else if (month == 11) {
		cout << "\nНоябрь" << endl;
	}
	else if (month == 12) {
		cout << "\nДекабрь" << endl;
	}
}

void programmers_day(bool leap_year_check, int year) {
	if (leap_year_check) {
		cout << "\nДень программиста в " << year << " году приходится на 12 сентября." << endl;
	}
	else {
		cout << "\nДень программиста в " << year << " году приходится на 13 сентября." << endl;
	}
}
