#include <iostream>

using namespace std;

void func_dummy();

int main() {
	setlocale(LC_ALL, "rus");
	int n = 7;
	int negative = -7;
	bool first_logic_var = true;
	bool second_logic_var = false;
	char second_letter = 'v';
	char second_letter_rus = 'â';
	wchar_t first_letter = 'G';
	wchar_t first_letter_rus = 'Ã';
	short X_variable = 9 + n;
	short X_negative_variable = -(X_variable);
	short the_biggest_number = 0x7FFF;
	short the_smallest_number = -(0x7FFF);
	unsigned short the_biggest_number_uns = 0xFFFF;
	unsigned short the_smallest_number_uns = 0x0;
	int Y_variable = 10 + n;
	int Y_variable_negative = -(10 + n);
	int the_biggest_integer = 0x7FFFFFFF;
	int the_smallest_integer = -0x7FFFFFFF;
	unsigned int the_biggest_uns_integer = 0xFFFFFFFF;
	unsigned int the_smallest_uns_integer = 0x0;
	long Z_variable = 11 + n;
	long Z_variable_negative = -(11 + n);
	unsigned long the_biggest_long_variable_uns = 0xFFFFFFFF;
	unsigned long the_smallest_long_variable_uns = 0x0;
	float S_variable = 1.0 + n;
	float S_variable_negative = -(1.0 + n);
	float inf = INFINITY;
	float negative_infinity = -inf;
	float indefinite = NAN;
	char* char_ptr = &second_letter;
	wchar_t* wchar_ptr = &first_letter;
	short* short_ptr = &X_variable;
	int* int_ptr = &n;
	float* float_ptr = &S_variable;
	double some_variable = 1;
	double* double_ptr = &some_variable;
	void(*func_ptr)(void) = &func_dummy;
	func_ptr();
}

void func_dummy() {
	cout << "This function does nothing." << endl;
}