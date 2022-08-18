#include <iostream>
using namespace std;

int main()
{
    char a, b;
    scanf("%c", &a);
    for (b = 'a'; b <= a; b++)
    {
        printf("%c ", b);
    }

    return 0;
}