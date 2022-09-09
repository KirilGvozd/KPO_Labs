#include "stdafx.h"
#include "In.h"
#include "Error.h"

using namespace std;

namespace In
{
    IN getin(wchar_t infile[])
    {
        IN in;
        in.size = 0; 
        in.lines = 1; 
        in.ignor = 0;
        int col = 1;
        unsigned char* buff = new unsigned char[IN_MAX_LEN_TEXT];
        ifstream fin(infile);

        if (fin.fail()) { throw ERROR_THROW(110); }

        while (in.size < IN_MAX_LEN_TEXT)
        {
            char c;
            fin.get(c);
            unsigned char x = c;
            if (fin.eof())
            {
                buff[in.size] = '\0';
                break;
            }
            if (in.code[x] == in.T)
            {
                buff[in.size] = x;
                in.size++;
                col++;
            }
            else if (in.code[x] == in.I)
            {
                in.ignor++;
            }
            else if (in.code[x] == in.F)
            {
                throw ERROR_THROW_IN(111, in.lines, col);
            }
            else
            {
                buff[in.size] = in.code[x];
                in.size++;
                col++;
            }
            if (x == IN_CODE_ENDL)
            {
                in.lines++;
                col = 1;
            }
        }
        in.text = buff;
        return in;
    }
}
