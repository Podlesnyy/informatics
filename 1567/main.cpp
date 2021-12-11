#include <iostream>
using std::cin;
using std::cout;
using std::endl;
int main() {
    int i, n, * a, s, m;

    cin >> n;
    a = new int[n];

    for (i = 0; i < n; i++)
        cin >> a[i];
    for (s = 0, i = 1, n--; i < n; i++)
        if (a[i] == a[i - 1] + a[i + 1]) {
            cout << a[i] << " ";
        }
    delete[] a;
    return 0;
}