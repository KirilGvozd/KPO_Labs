#pragma once
#include "stdafx.h"

#define FUNCTION(string) string, 9,			  \
			FST::NODE(1, FST::RELATION('f', 1)),  \
			FST::NODE(1, FST::RELATION('u', 2)),  \
			FST::NODE(1, FST::RELATION('n', 3)),  \
			FST::NODE(1, FST::RELATION('c', 4)),  \
			FST::NODE(1, FST::RELATION('t', 5)),  \
			FST::NODE(1, FST::RELATION('i', 6)),  \
			FST::NODE(1, FST::RELATION('o', 7)),  \
			FST::NODE(1, FST::RELATION('n', 8)),  \
			FST::NODE()			

#define INTEGER(string) string, 8,			  \
			FST::NODE(1, FST::RELATION('i', 1)),  \
			FST::NODE(1, FST::RELATION('n', 2)),  \
			FST::NODE(1, FST::RELATION('t', 3)),  \
			FST::NODE(1, FST::RELATION('e', 4)),  \
			FST::NODE(1, FST::RELATION('g', 5)),  \
			FST::NODE(1, FST::RELATION('e', 6)),  \
			FST::NODE(1, FST::RELATION('r', 7)),  \
			FST::NODE()		

#define STRING(string) string, 7,				  \
			FST::NODE(1, FST::RELATION('s', 1)),  \
			FST::NODE(1, FST::RELATION('t', 2)),  \
			FST::NODE(1, FST::RELATION('r', 3)),  \
			FST::NODE(1, FST::RELATION('i', 4)),  \
			FST::NODE(1, FST::RELATION('n', 5)),  \
			FST::NODE(1, FST::RELATION('g', 6)),  \
			FST::NODE()		

#define DECLARE(string) string, 8,			  \
			FST::NODE(1, FST::RELATION('d', 1)),  \
			FST::NODE(1, FST::RELATION('e', 2)),  \
			FST::NODE(1, FST::RELATION('c', 3)),  \
			FST::NODE(1, FST::RELATION('l', 4)),  \
			FST::NODE(1, FST::RELATION('a', 5)),  \
			FST::NODE(1, FST::RELATION('r', 6)),  \
			FST::NODE(1, FST::RELATION('e', 7)),  \
			FST::NODE()	

#define RETURN(string) string, 7,				  \
			FST::NODE(1, FST::RELATION('r', 1)),  \
			FST::NODE(1, FST::RELATION('e', 2)),  \
			FST::NODE(1, FST::RELATION('t', 3)),  \
			FST::NODE(1, FST::RELATION('u', 4)),  \
			FST::NODE(1, FST::RELATION('r', 5)),  \
			FST::NODE(1, FST::RELATION('n', 6)),  \
			FST::NODE()	

#define PRINT(string) string, 6,				  \
			FST::NODE(1, FST::RELATION('p', 1)),  \
			FST::NODE(1, FST::RELATION('r', 2)),  \
			FST::NODE(1, FST::RELATION('i', 3)),  \
			FST::NODE(1, FST::RELATION('n', 4)),  \
			FST::NODE(1, FST::RELATION('t', 5)),  \
			FST::NODE()	

#define IDENTIFICATOR(string) string, 1,	\
			FST::NODE(60, \
	FST::RELATION('a', 0), \
	FST::RELATION('b', 0), \
	FST::RELATION('c', 0), \
	FST::RELATION('d', 0), \
	FST::RELATION('e', 0), \
	FST::RELATION('f', 0), \
	FST::RELATION('g', 0), \
	FST::RELATION('h', 0), \
	FST::RELATION('i', 0), \
	FST::RELATION('j', 0), \
	FST::RELATION('k', 0), \
	FST::RELATION('l', 0), \
	FST::RELATION('m', 0), \
	FST::RELATION('n', 0), \
	FST::RELATION('o', 0), \
	FST::RELATION('p', 0), \
	FST::RELATION('q', 0), \
	FST::RELATION('r', 0), \
	FST::RELATION('s', 0), \
	FST::RELATION('t', 0), \
	FST::RELATION('u', 0), \
	FST::RELATION('v', 0), \
	FST::RELATION('w', 0), \
	FST::RELATION('x', 0), \
	FST::RELATION('y', 0), \
	FST::RELATION('z', 0), \
	FST::RELATION('0', 0), \
	FST::RELATION('1', 0), \
	FST::RELATION('2', 0), \
	FST::RELATION('3', 0), \
	FST::RELATION('4', 0), \
	FST::RELATION('5', 0), \
	FST::RELATION('6', 0), \
	FST::RELATION('7', 0), \
	FST::RELATION('8', 0), \
	FST::RELATION('9', 0), \
	FST::RELATION('_', 0), \
	FST::RELATION('à', 0), \
	FST::RELATION('á', 0), \
	FST::RELATION('â', 0), \
	FST::RELATION('ã', 0), \
	FST::RELATION('ä', 0), \
	FST::RELATION('å', 0), \
	FST::RELATION('¸', 0), \
	FST::RELATION('æ', 0), \
	FST::RELATION('ç', 0), \
	FST::RELATION('è', 0), \
	FST::RELATION('é', 0), \
	FST::RELATION('ê', 0), \
	FST::RELATION('ë', 0), \
	FST::RELATION('ì', 0), \
	FST::RELATION('í', 0), \
	FST::RELATION('î', 0), \
	FST::RELATION('ï', 0), \
	FST::RELATION('ð', 0), \
	FST::RELATION('ñ', 0), \
	FST::RELATION('ò', 0), \
	FST::RELATION('ó', 0), \
	FST::RELATION('ô', 0), \
	FST::RELATION('õ', 0), \
	FST::RELATION('ö', 0), \
	FST::RELATION('÷', 0), \
	FST::RELATION('ø', 0), \
	FST::RELATION('ù', 0), \
	FST::RELATION('ú', 0), \
	FST::RELATION('û', 0), \
	FST::RELATION('ü', 0), \
	FST::RELATION('ý', 0), \
	FST::RELATION('þ', 0), \
	FST::RELATION('ÿ', 0)), \
	FST::NODE()

#define STRING_LITERAL(string) string, 3,	\
		FST::NODE(1, FST::RELATION('\'', 1)),	\
		FST::NODE(85,	\
		FST::RELATION(' ', 1),	\
		FST::RELATION('a', 1),	\
		FST::RELATION('b', 1),	\
		FST::RELATION('c', 1),	\
		FST::RELATION('d', 1),	\
		FST::RELATION('e', 1),	\
		FST::RELATION('f', 1),	\
		FST::RELATION('g', 1),	\
		FST::RELATION('h', 1),	\
		FST::RELATION('i', 1),	\
		FST::RELATION('j', 1),	\
		FST::RELATION('k', 1),	\
		FST::RELATION('l', 1),	\
		FST::RELATION('m', 1),	\
		FST::RELATION('n', 1),	\
		FST::RELATION('o', 1),	\
		FST::RELATION('p', 1),	\
		FST::RELATION('q', 1),	\
		FST::RELATION('r', 1),	\
		FST::RELATION('s', 1),	\
		FST::RELATION('t', 1),	\
		FST::RELATION('u', 1),	\
		FST::RELATION('v', 1),	\
		FST::RELATION('w', 1),	\
		FST::RELATION('x', 1),	\
		FST::RELATION('y', 1),	\
		FST::RELATION('z', 1),	\
		FST::RELATION('0', 1),	\
		FST::RELATION('1', 1),	\
		FST::RELATION('2', 1),	\
		FST::RELATION('3', 1),	\
		FST::RELATION('4', 1),	\
		FST::RELATION('5', 1),	\
		FST::RELATION('6', 1),	\
		FST::RELATION('7', 1),	\
		FST::RELATION('8', 1),	\
		FST::RELATION('9', 1),	\
		FST::RELATION('à', 1),	\
		FST::RELATION('á', 1),	\
		FST::RELATION('â', 1),	\
		FST::RELATION('ã', 1),	\
		FST::RELATION('ä', 1),	\
		FST::RELATION('å', 1),	\
		FST::RELATION('¸', 1),	\
		FST::RELATION('æ', 1),	\
		FST::RELATION('ç', 1),	\
		FST::RELATION('è', 1),	\
		FST::RELATION('é', 1),	\
		FST::RELATION('ê', 1),	\
		FST::RELATION('ë', 1),	\
		FST::RELATION('ì', 1),	\
		FST::RELATION('í', 1),	\
		FST::RELATION('î', 1),	\
		FST::RELATION('ï', 1),	\
		FST::RELATION('ð', 1),	\
		FST::RELATION('ñ', 1),	\
		FST::RELATION('ò', 1),	\
		FST::RELATION('ó', 1),	\
		FST::RELATION('ô', 1),	\
		FST::RELATION('õ', 1),	\
		FST::RELATION('ö', 1),	\
		FST::RELATION('÷', 1),	\
		FST::RELATION('ø', 1),	\
		FST::RELATION('ù', 1),	\
		FST::RELATION('ú', 1),	\
		FST::RELATION('û', 1),	\
		FST::RELATION('ü', 1),	\
		FST::RELATION('ý', 1),	\
		FST::RELATION('þ', 1),	\
		FST::RELATION('ÿ', 1),	\
		FST::RELATION('=', 1),	\
		FST::RELATION('+', 1),	\
		FST::RELATION('-', 1),	\
		FST::RELATION('*', 1),	\
		FST::RELATION('/', 1),	\
		FST::RELATION('(', 1),	\
		FST::RELATION(')', 1),	\
		FST::RELATION('{', 1),	\
		FST::RELATION('}', 1),	\
		FST::RELATION(';', 1),	\
		FST::RELATION(',', 1),	\
		FST::RELATION('?', 1),	\
		FST::RELATION('!', 1),	\
		FST::RELATION('\'', 2)),\
		FST::NODE()

#define INTEGER_LITERAL(string) string, 1,	\
	FST::NODE(10,	FST::RELATION('0', 0),	\
					FST::RELATION('1', 0),	\
					FST::RELATION('2', 0),	\
					FST::RELATION('3', 0),	\
					FST::RELATION('4', 0),	\
					FST::RELATION('5', 0),	\
					FST::RELATION('6', 0),	\
					FST::RELATION('7', 0),	\
					FST::RELATION('8', 0),	\
					FST::RELATION('9', 0)),	\
	FST::NODE()