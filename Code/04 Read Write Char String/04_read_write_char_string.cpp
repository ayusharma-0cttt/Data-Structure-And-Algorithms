#include <iostream>
#include <string>

using namespace std;

int main()
{
    char ch;
    char name[20];

    cout << "Enter The Character: ";
    cin.get(ch);

    cout << "Enter the name: ";
    cin.getline(name, 20);

    cout << "Character: " << ch << endl;
    cout << "Name: " << name << endl;

    return 0;
}