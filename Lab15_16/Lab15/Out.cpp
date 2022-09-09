#include "stdafx.h"
#include "Out.h"
#include "In.h"

using namespace std;

namespace Out
{
	OUT out;
	OUT getout(wchar_t outfile[])
	{
		OUT out;
		out.stream = new ofstream;
		out.stream->open(outfile);
		if (!out.stream->is_open()) { throw ERROR_THROW(112); }
		wcscpy_s(out.outfile, outfile);
		return out;
	}
	void WriteError(OUT out, Error::ERROR error)
	{
		if (out.stream->fail() == 0)
		{
			*out.stream << "Ошибка " << error.id << ": " << error.message << ", строка " << error.inext.line << ", столбец " << error.inext.col << endl;
		}
		else
		{
			cout << error.id << ": " << error.message << ", строка " << error.inext.line << ", столбец " << error.inext.col << endl;
		}
	}
	void File(OUT out, In::IN in) 
	{
		*out.stream << in.text << endl;	
	}
	void Close(OUT out)
	{
		out.stream->close();
	}
}