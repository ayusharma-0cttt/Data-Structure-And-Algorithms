#include <iostream>

using namespace std;

int main()
{
    // Bitwise AND
    int a = 5;                                  // 0101
    int b = 3;                                  // 0011
    cout << "Bitwise AND: " << (a & b) << endl; // Output: 1 (0001)

    // Bitwise OR
    cout << "Bitwise OR: " << (a | b) << endl; // Output: 7 (0111)

    // Bitwise XOR
    cout << "Bitwise XOR: " << (a ^ b) << endl; // Output: 6 (0110)

    // Bitwise NOT
    cout << "Bitwise NOT: " << (~a) << endl; // Output: -6 (in two's complement representation)

    return 0;
}