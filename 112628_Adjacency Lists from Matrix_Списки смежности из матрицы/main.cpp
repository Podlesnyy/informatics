#include <iostream>
using namespace std;


int main()
{
    int a = 0;
    int b = 1;
    int n;
    cin >> n;
    int *x = new int [n*n];
    int *y = new int[n*n];
    for (int i = 0; i < n * n; i++)
    {
        cin >> x[i];
        if (x[i] == 1)
            y[i] = (i % n) + 1;
        else
            y[i] = 0;
    }
    for (int j = 0; j < n * n; j++)
    {
        if (y[j] != 0)
            cout << y[j] << " ";
        else
        {
            if (j % n == 0)
            {
                for (int i = j; i < j + n; i++)

                    if (y[i] == 0)

                        b++;

                if (j == 0)
                    b--;
                if (b == n)
                    cout << 0;
                b = 0;
            }
        }
        a++;
        if (a % n == 0)
            cout << endl;
    }
    system("PAUSE");
    return 0;
}