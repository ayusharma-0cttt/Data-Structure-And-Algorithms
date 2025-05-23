#include <iostream>
using namespace std;

int main()
{
    int a = 5;
    int b = -3;

    cout << "Unary Operators:" << endl;

    // Unary plus
    cout << "+a: " << +a << endl; // 5

    // Unary minus
    cout << "-b: " << -b << endl; // 3

    // Increment
    cout << "++a: " << ++a << endl; // 6
    cout << "b++: " << b++ << endl; // -3 (post-increment)

    // Decrement
    cout << "--a: " << --a << endl; // 5
    cout << "b--: " << b-- << endl; // -2 (post-decrement)

    return 0;
}