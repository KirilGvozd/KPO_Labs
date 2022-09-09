#include "stdafx.h"

#include "Error.h"
#include "Parm.h"
#include "Log.h"
#include "In.h"
#include "Out.h"

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(LC_ALL, "Rus");
	////////////////////////////////////---ERROR---///////////////////////////////////////////////////////////////////////////////
	cout << "---- Тест Error::geterror ----" << endl << endl;
	try
	{
		throw ERROR_THROW(1);
	}
	catch (Error::ERROR e)
	{
		cout << "Ошибка " << e.id << ": " << e.message << endl << endl;
	}
	cout << "---- Тест Error::geterror ----" << endl << endl;
	try 
	{
		throw ERROR_THROW_IN(112, 7, 7);
	}
	catch (Error::ERROR e)
	{
		cout << "Ошибка " << e.id << ": " << e.message << ", строка " << e.inext.line << ", столбец " << e.inext.col << endl << endl;
	}
	/////////////////////////////////////////---PARM---///////////////////////////////////////////////////////////////////////////////////
	cout << "---- Тест Parm::getparm ----" << endl << endl;
	try {
		Parm::PARM parm = Parm::getparm(argc, argv);
		wcout << "-in:" << parm.in << ", -out:" << parm.out << ", -log:" << parm.log << endl << endl;
	}
	catch (Error::ERROR e) 
	{
		cout << "Ошибка " << e.id << ": " << e.message << endl << endl;
	}
	////////////////////////////////////////////---IN---/////////////////////////////////////////////////////////////////////////////////
	cout << "---- Тест In::getin ----" << endl << endl;
	try
	{
		Parm::PARM parm = Parm::getparm(argc, argv);
		In::IN in = In::getin(parm.in);
		cout << in.text << endl;
		cout << "Всего символов: " << in.size << endl;
		cout << "Всего строк: " << in.lines << endl;
		cout << "Пропущено: " << in.ignor << endl;
	}
	catch (Error::ERROR e)
	{
		cout << "Ошибка " << e.id << ": " << e.message << endl;
		cout << "cтрока " << e.inext.line << " позиция " << e.inext.col << endl << endl;
	}
	////////////////////////////////////////---LOG---//////////////////////////////////////////////////////////////////////////////////
	Log::LOG log = Log::INITLOG;
	try
	{
		Parm::PARM parm = Parm::getparm(argc, argv);
		log = Log::getlog(parm.log);
		Log::WriteLine(log, (char*)"Тест:", (char*)" без ошибок \n", "");
		Log::WriteLine(log, (wchar_t*)L"Тест:", (wchar_t*)L" без ошибок \n", L"");
		Log::WriteLog(log);
		Log::WriteParm(log, parm);
		In::IN in = In::getin(parm.in);
		Log::WriteIn(log, in);
		Log::Close(log);
	}
	catch (Error::ERROR e)
	{
		Log::WriteError(log, e);
	}

	////////////////////////////////////////---OUT---//////////////////////////////////////////////////////////////////////////////////
	Out::OUT out = Out::INITOUT;
	try
	{
		Parm::PARM parm = Parm::getparm(argc, argv);
		out = Out::getout(parm.out);
		In::IN in = In::getin(parm.in);
		Out::File(out, in);
		Out::Close(out);
	}
	catch (Error::ERROR e)
	{
		Out::WriteError(out, e);
	}


	system("pause");
	return 0;
}

