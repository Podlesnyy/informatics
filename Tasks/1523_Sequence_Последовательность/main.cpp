#include <iostream>
#include <cmath>
#include <iomanip>


using namespace std;

int main() {
    long long n, k=0, flag=0, p;
    double s = 0;
    cin >> n;
    while (n != -2000000000) {
        p = n;
        cin >> n;
        if (n == -2000000000) {
            break;
        }
        k += 1;
        if (p == n) {
            s += 1;
        }
        else if (p > n) {
            if (flag == 2) {
                cout << "RANDOM";
                return 0;
            }
            flag = 1;
            s += 0;
        }
        else {
            if (flag == 1) {
                cout << "RANDOM";
                return 0;
            }
            flag = 2;
            s += 2;
        }
    }
    if (k != 0) {
        double sr = s/k;
        if (0 < sr && sr < 1)
            cout << "WEAKLY DESCENDING";
        else if (sr == 0)
            cout << "DESCENDING";
        else if (sr == 1)
            cout << "CONSTANT";
        else if (sr == 2)
            cout << "ASCENDING";
        else
            cout << "WEAKLY ASCENDING";
    }
    else {
        cout << "RANDOM";
    }
    cout << endl;
    system("pause");
    return 0;
}