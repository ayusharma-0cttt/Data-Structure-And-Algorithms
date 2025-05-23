#include <iostream>

using namespace std;

int main()
{
    int a = 0, b = 1;

    cout << "Logical AND (&&):" << endl;
    cout << "a && a: " << (a && a) << endl; // 0
    cout << "a && b: " << (a && b) << endl; // 0
    cout << "b && a: " << (b && a) << endl; // 0
    cout << "b && b: " << (b && b) << endl; // 1

    cout << "\nLogical OR (||):" << endl;
    cout << "a || a: " << (a || a) << endl; // 0
    cout << "a || b: " << (a || b) << endl; // 1
    cout << "b || a: " << (b || a) << endl; // 1
    cout << "b || b: " << (b || b) << endl; // 1

    cout << "\nLogical NOT (!):" << endl;
    cout << "!a: " << !a << endl; // 1
    cout << "!b: " << !b << endl; // 0
    cout << "!!a: " << !!a << endl; // 0

    return 0;
}