#include "stdafx.h"
#include "FST.h"

int _tmain(int argc, TCHAR* argv[])
{
	setlocale(LC_ALL, "rus");

	char str1[] = "afcfef";
	char str2[] = "afbdfef";
	char str3[] = "afcfbef";
	char str4[] = "afbcfbef";
	char str5[] = "afbbdfbef";
	char str6[] = "afbbcfbbef";
	char str7[] = "afbbdfef";
	char str8[] = "aaaaa";
	char str9[] = "ababababdacedf";

	char* chains[] = { str1, str2, str3, str4, str5, str6, str7, str8, str9 };

	for (int i = 0; i < sizeof(chains) / sizeof(char*); i++)
	{
		FST::FST fst(chains[i], 7,
			FST::NODE(1, FST::RELATION('a', 1)),
			FST::NODE(1, FST::RELATION('f', 2)),
			FST::NODE(5, FST::RELATION('b', 2), FST::RELATION('c', 3), FST::RELATION('c', 4), FST::RELATION('d', 3), FST::RELATION('d', 4)),
			FST::NODE(1, FST::RELATION('f', 4)),
			FST::NODE(2, FST::RELATION('b', 4), FST::RELATION('e', 5)),
			FST::NODE(1, FST::RELATION('f', 6)),
			FST::NODE()
		);


		if (FST::execute(fst)) 
		{
			std::cout << "Цепочка " << fst.string << " распознана" << std::endl;
		}
		else 
		{
			std::cout << "Цепочка " << fst.string << " не распознана" << std::endl;
		}
	};
	system("pause");
	return 0;
}
