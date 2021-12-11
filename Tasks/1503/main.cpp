#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    cin >> a;
    cin >> b;
    cin >> c;
    if ((a < b + c) and (b < a + c) and (c < a + b))
    {
        if (a * a + b * b == c * c)
            cout << "rectangular";
        else if ((a * a + b * b > c * c) and (a * a + c * c > b * b) and (c * c + b * b > a * a))
            cout << "acute";
        else
            cout << "obtuse";
    }
    else
        cout << "impossible";


    cout << endl;

    return 0;
}