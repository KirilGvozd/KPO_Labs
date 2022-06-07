#include "Call.h"

namespace Call {
	int _cdecl cdevl(int x, int y, int z) {
		return x + y + z;
	}
	int _stdcall cstd(int& x, int y, int z) {
		return x * y * z;
	}
	int _fastcall cfst(int x, int y, int z, int a) {
		return x + y + z + a;
	}
}