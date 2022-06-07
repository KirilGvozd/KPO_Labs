#include <iostream>
#pragma comment(lib, "A:/KPO/Lab7/Lab7/x64/Debug/Library.lib")
#include "/KPO/Lab7/Lab7/Dictionary.h"

using namespace std;
using namespace Dictionary;

int main() {
	setlocale(LC_ALL, "Ru");
	try {
		Instance d1 = Create((char*)"Преподаватели", 5);
		Entry	e1 = { 1,"Смелов" }, e2 = { 2,"Наркевич" }, e3 = { 3,"Мущук" }, e4 = { 4, "Гринюк" }, e5 = { 5, "Шиман" };
		AddEntry(d1, e1);
		AddEntry(d1, e2);
		AddEntry(d1, e3);
		AddEntry(d1, e4);
		AddEntry(d1, e5);
		Print(d1);

		Instance d2 = Create((char*)"Студенты", 5);
		Entry s1 = { 1,"Климович" }, s2 = { 2,"Гвоздовский" }, s3 = { 4,"Козак" };
		AddEntry(d2, s1);
		AddEntry(d2, s2);
		AddEntry(d2, s3);
		Print(d2);
	}
	catch (char* e) {
		cout << e << endl;
	}
	return 0;
}