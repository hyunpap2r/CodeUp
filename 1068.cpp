
#include <iostream>
using namespace std;

int main()
{
/*평가 기준
점수 범위 : 평가
 90 ~ 100 : A
 70 ~   89 : B
 40 ~   69 : C
 0 ~   39 : D
 */

    int a;
    cin >> a;
    
    if(a >= 90)
        cout << "A" << endl;
    else if(a >= 70)
        cout << "B" << endl;
    else if(a >= 40)
        cout << "C" << endl;
    else
        cout << "D" << endl;

    


    return 0;
}