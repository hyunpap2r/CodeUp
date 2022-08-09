    #include <iostream>
    using namespace std;

    int main()
    {
        int a, b;
        cin >> a >> b;

        cout << a + b << endl;
        cout << a - b << endl;
        cout << a * b << endl;
        cout << a / b << endl;
        cout << a % b << endl;
        
        float a1 = a, b1 = b;
        printf("%.2f", a1 / b1);

        return 0;
    }