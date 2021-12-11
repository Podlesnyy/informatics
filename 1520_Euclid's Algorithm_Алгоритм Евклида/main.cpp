#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    while (n != 0 && m != 0) {
        if (n > m) {
            n = n % m;
        }
        else if (m > n) {
            m = m % n;
        }
    }
    cout << endl;
    cout << n + m;
    system("pause");
    return 0;
}