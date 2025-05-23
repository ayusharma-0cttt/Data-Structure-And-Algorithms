#include <iostream>

using namespace std;

int main()
{
    int a = 10;
    float b = 20.5;
    char c = 'A';
    double d = 30.5;
    bool e = true;
    short f = 5;
    long g = 1000000;
    long long h = 10000000000;
    unsigned int i = 15;
    unsigned short j = 25;
    unsigned long k = 2000000;
    unsigned long long l = 30000000000;

    cout << "Size of int: " << sizeof(a) << " bytes" << endl;
    cout << "Size of float: " << sizeof(b) << " bytes" << endl;
    cout << "Size of char: " << sizeof(c) << " bytes" << endl;
    cout << "Size of double: " << sizeof(d) << " bytes" << endl;
    cout << "Size of bool: " << sizeof(e) << " bytes" << endl;
    cout << "Size of short: " << sizeof(f) << " bytes" << endl;
    cout << "Size of long: " << sizeof(g) << " bytes" << endl;
    cout << "Size of long long: " << sizeof(h) << " bytes" << endl;
    cout << "Size of unsigned int: " << sizeof(i) << " bytes" << endl;
    cout << "Size of unsigned short: " << sizeof(j) << " bytes" << endl;
    cout << "Size of unsigned long: " << sizeof(k) << " bytes" << endl;
    cout << "Size of unsigned long long: " << sizeof(l) << " bytes" << endl;

    return 0;
}