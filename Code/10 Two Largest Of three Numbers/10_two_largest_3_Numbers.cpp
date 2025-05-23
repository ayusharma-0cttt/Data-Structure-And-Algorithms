#include <iostream>

using namespace std;

int main()
{
    int a = 10, b = 20, c = 30;

    a > b &&a > c ? (a > c ? a : c) : (b > c ? b : c);
    cout << "The largest number is: " << (a > b && a > c ? (a > c ? a : c) : (b > c ? b : c)) << endl;
    cout << "The second largest number is: " << (a < b && a < c ? (b > c ? b : c) : (a > c ? a : c)) << endl;

    return 0;
}