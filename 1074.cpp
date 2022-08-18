#include <iostream>
using namespace std;

int main()
{
    int a;
    cin >> a;

    while (true)
    {
        for (int i = 0; i < a; i++)
        cout << a-- << endl;
        if(a == 0)
        break;
        /* code */
    }
    

    return 0;
}