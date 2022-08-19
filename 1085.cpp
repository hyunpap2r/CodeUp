#include <iostream>
using namespace std;

int main()
{
    long long int h, b, s, c;
    double md = 0;
    scanf("%lld" "%lld" "%lld" "%lld", &h, &b, &s, &c);
    md = h * b * c *s;
    printf("%.1lf MB",md/8/1024/1024);


    return 0;
}