#include <iostream>
#include <math.h>

using namespace std;

main()
{
    int num;

    cout << "Enter The Number: ";
    cin >> num;

    cout << "Octa Of Number: ";
    cout.setf(ios::oct, ios::basefield);
    cout << num << endl;

    cout << "Hexa Of Number: ";
    cout.setf(ios::hex, ios::basefield);
    cout << num << endl;

    return 0;
}