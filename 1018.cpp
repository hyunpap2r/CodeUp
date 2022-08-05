#include <iostream>
using namespace std;

int main()
{
    int hour, minute;
    cin >> hour;
    cin.ignore(256,':');
    cin >> minute;
    cout << hour << ":" << minute;

    return 0;
}