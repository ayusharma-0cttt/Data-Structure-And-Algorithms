#include <iostream>

using namespace std;

int main()
{
    int a = 2, b = 3, x = 0;

    // Using comma operator
    x = (++a, b += a);
    cout << "Value Of x: " << x << endl; // Output: 6

    return 0;
}