#include <iostream>
using namespace std;

int main()
{
    //width, fill

    int since, month, day;
    cin >> since;
    cin.ignore(256, '.');
    cin >> month;
    cin.ignore(256, '.');
    cin >> day;

    cout.width(4); 
    cout.fill('0');
    cout << since << '.';

    cout.width(2); 
    cout.fill('0');
    cout << month << '.';

    cout.width(2); 
    cout.fill('0');
    cout << day;

    return 0;
}