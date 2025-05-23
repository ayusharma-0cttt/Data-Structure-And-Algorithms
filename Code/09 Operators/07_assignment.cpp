#include <iostream>

using namespace std;

int main()
{
    int a = 5;  // Initialize a with 5
    int b = 10; // Initialize b with 10

    // Assignment operator
    a = b;                                         // Assign the value of b to a
    cout << "After assignment, a = " << a << endl; // Output: 10

    // Compound assignment operators
    a += b;                                     // Equivalent to a = a + b
    cout << "After a += b, a = " << a << endl;  // Output: 20
    a -= b;                                     // Equivalent to a = a - b
    cout << "After a -= b, a = " << a << endl;  // Output: 10
    a *= b;                                     // Equivalent to a = a * b
    cout << "After a *= b, a = " << a << endl;  // Output: 100
    a /= b;                                     // Equivalent to a = a / b
    cout << "After a /= b, a = " << a << endl;  // Output: 10
    a %= b;                                     // Equivalent to a = a % b
    cout << "After a %= b, a = " << a << endl;  // Output: 0
    a &= b;                                     // Equivalent to a = a & b
    cout << "After a &= b, a = " << a << endl;  // Output: 0
    a |= b;                                     // Equivalent to a = a | b
    cout << "After a |= b, a = " << a << endl;  // Output: 10
    a ^= b;                                     // Equivalent to a = a ^ b
    cout << "After a ^= b, a = " << a << endl;  // Output: 0
    a <<= 1;                                    // Equivalent to a = a << 1
    cout << "After a <<= 1, a = " << a << endl; // Output: 0
    a >>= 1;                                    // Equivalent to a = a >> 1
    cout << "After a >>= 1, a = " << a << endl; // Output: 0
    a = 5;                                      // Reset a to 5
    a <<= 1;                                    // Left shift a by 1
    cout << "After a <<= 1, a = " << a << endl; // Output: 10
    a = 5;                                      // Reset a to 5
    a >>= 1;                                    // Right shift a by 1
    cout << "After a >>= 1, a = " << a << endl; // Output: 2
    a = 5;                                      // Reset a to 5
    a &= 3;                                     // Bitwise AND with 3
    cout << "After a &= 3, a = " << a << endl;  // Output: 1
    a = 5;                                      // Reset a to 5
    a |= 3;                                     // Bitwise OR with 3
    cout << "After a |= 3, a = " << a << endl;  // Output: 7
    a = 5;                                      // Reset a to 5
    a ^= 3;                                     // Bitwise XOR with 3
    cout << "After a ^= 3, a = " << a << endl;  // Output: 6

    return 0;
}