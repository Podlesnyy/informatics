#include <iostream>
#include <cmath>

using namespace std;

bool IsPrime(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return false;
    if (n < 2)
        return false;
    return true;
}

int main()
{
    int a, b, count=0;
    cin >> a;
    cin >> b;
    for (int i = a; i <= b; i++)
    {
        if (IsPrime(i)) {
            cout << i << " ";
            count++;
        }
    }
    if (count == 0)
        cout << "0";
    cout << endl;
    system("pause");
    return 0;
}