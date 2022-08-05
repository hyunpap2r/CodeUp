#include <iostream>
using namespace std;

int main()
{
    // NOT NULL //
    char c[20];
    cin >> c;

    for (int i = 0; c[i] != '\0'; i++)
    {
        cout << "\'" << c[i] << "\'" << endl;
    }

    return 0;
}