#include <iostream>
using namespace std;

int main()
{
    long long int w, h, b;
    double md = 0;
    scanf("%lld" "%lld" "%lld", &w, &h, &b);
    md = w*h*b;
    printf("%.2lf MB",md/8/1024/1024);


    return 0;
}