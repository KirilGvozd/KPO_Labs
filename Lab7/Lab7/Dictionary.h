#pragma once

#include <Windows.h>
#include <iostream>

#define DICTNAMEMAXSIZE 20
#define DICTMAXSIZE 6
#define ENTRYNAMEMAXSIZE 20
#define THROW1 "Create: превышена длина имени словаря"
#define THROW2 "Create: превышен размер максимальной емкости словаря"
#define THROW3 "AddEntry: переполнение словаря"
#define THROW4 "AddEntry: дублирование идентификатора"
#define THROW5 "GetEntry: не найден элемент"
#define THROW6 "DelEntry: не найден элемент"
#define THROW7 "UpdEntry: не найден элемент"
#define THROW8 "UpdEntry: дублирование идентификатора"

namespace Dictionary {

	struct Entry {
		int	id;
		char name[ENTRYNAMEMAXSIZE];
	};

	struct Instance {
		char name[DICTNAMEMAXSIZE];
		int maxsize;
		int size;
		Entry* dictionary[DICTMAXSIZE];
	};

	Instance Create(
		char name[DICTNAMEMAXSIZE],
		int size
	);

	void AddEntry(
		Instance& inst,
		Entry ed
	);

	void DelEntry(
		Instance& inst,
		int id
	);

	void UpdEntry(
		Instance& inst,
		int id,
		Entry new_ed
	);

	Entry GetEntry(
		Instance& inst,
		int id
	);

	void Print(Instance& d);
	void Delete(Instance& d);
}
