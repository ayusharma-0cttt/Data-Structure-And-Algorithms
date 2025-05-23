#include <iostream>
using namespace std;
#define PI 3.14159265358979323846

int main()
{
    cout.precision(4);
    cout.width(15);
    cout.fill('#');
    cout << PI;

    return 0;
}