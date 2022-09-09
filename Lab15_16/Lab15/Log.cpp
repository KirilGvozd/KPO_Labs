#include "stdafx.h"
#include "Log.h"

using namespace std;

namespace Log
{
	LOG log;
	LOG getlog(wchar_t logfile[])
	{
		LOG log;
		log.stream = new ofstream;
		log.stream->open(logfile);
		if (!log.stream->is_open()) { throw ERROR_THROW(112); }
		wcscpy_s(log.logfile, logfile);
		return log;
	}
	void WriteLine(LOG log, char* c, ...)
	{
		char** p = &c;
		while (*p != "")
		{
			*log.stream << *p;
			p++;
		}
	}
	void WriteLine(LOG log, wchar_t* c, ...)
	{
		wchar_t** p = &c;
		while (*p != L"")
		{
			char buffer[16];
			size_t ts = 0;
			wcstombs_s(&ts, buffer, *p, 16);
			*log.stream << buffer;
			p++;
		}
	}
	void WriteLog(LOG log)
	{
		time_t Time;
		tm timeinfo;
		char buffer[80];
		time(&Time);
		Time = time(NULL);
		localtime_s(&timeinfo, &Time);
		strftime(buffer, 80, "%d.%m.%Y %H:%M:%S", &timeinfo);
		*log.stream << "---- Протокол ------" << buffer << "----------------" << endl;
	}
	void WriteParm(LOG log, Parm::PARM parm)
	{
		char buff[PARM_MAX_SIZE];
		size_t ts = 0;
		*log.stream << "---- Параметры ----" << endl;
		wcstombs_s(&ts, buff, parm.in, PARM_MAX_SIZE);
		*log.stream << "-in: " << buff << endl;
		wcstombs_s(&ts, buff, parm.out, PARM_MAX_SIZE);
		*log.stream << "-out: " << buff << endl;
		wcstombs_s(&ts, buff, parm.log, PARM_MAX_SIZE);
		*log.stream << "-log: " << buff << endl;
	}
	void WriteIn(LOG log, In::IN in)
	{
		*log.stream << "---- Исходные данные ----" << endl;
		*log.stream << "Количество символов: " << in.size << endl;
		*log.stream << "Проигнорировано    : " << in.ignor << endl;
		*log.stream << "Количество строк   : " << in.lines << endl;
	}
	void WriteError(LOG log, Error::ERROR error)
	{
		if (log.stream->fail() == 0)
		{
			*log.stream << "Ошибка " << error.id << ": " << error.message << ", строка " << error.inext.line << ", столбец " << error.inext.col << endl;
		}
		else
		{
			cout << error.id << ": " << error.message << ", строка " << error.inext.line << ", столбец " << error.inext.col << endl;
		}
	}
	void Close(LOG log)
	{
		log.stream->close();
	}
}