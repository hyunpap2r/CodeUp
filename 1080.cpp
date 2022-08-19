#include <iostream>
using namespace std;

int main()
{
    int sum = 0;
    int a; 
    cin >> a;

    for (int i = 0; i < a; i++)
    {
        sum += i;
        if(sum >= a)
        {
            cout << i << endl;
            break;
        }
    }

    return 0;
}