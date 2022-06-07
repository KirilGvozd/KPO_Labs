#include <iostream>

using namespace std;

int defaultparam(int x1, int x2, int x3, int x4, int x5, int x6 = 0, int x7 = 0) {
    if (x6 == 0 && x7 == 0) return (x1 + x2 + x3 + x4 + x5 + x6 + x7) / 5;
    else return (x1 + x2 + x3 + x4 + x5 + x6 + x7) / 7;
}

int main() {
    int parm1 = defaultparam(1, 3, 5, 7, 9);
    int parm2 = defaultparam(1, 3, 5, 7, 9, 11, 13);
    cout << "Demonstration of defaultparam: " << endl;
    cout << "parm1 = " << parm1 << endl;
    cout << "parm2 = " << parm2 << endl;
}