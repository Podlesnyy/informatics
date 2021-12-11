#include <cstdlib>
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int* A = new int [n];
    for (int i = 0; i < n; i++)
    {
        A[i] = n;
        cin >> A[i];
    }
    for (int i = 0; i < n / 2; i++)
    {
        for (int j = i + 1; j < n / 2; j++)
            if (A[j] < A[i])
            {
                int c = A[i];
                A[i] = A[j];
                A[j] = c;
            }
    }
    for (int i = n / 2; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
            if (A[j] > A[i])
            {
                int c = A[i];
                A[i] = A[j];
                A[j] = c;
            }
    }

    for (int i = 0; i < n; i++)
        cout << A[i] << " ";
    cout << endl;
    system("PAUSE");
    return 0;
}