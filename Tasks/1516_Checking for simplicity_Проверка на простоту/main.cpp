#include <iostream>
#include <cmath>

using namespace std;

bool IsPrime(int n) {
    int min_divisor = 1;
    int sqrt_n = sqrt((double)n);
    for (int i = 2; i <= sqrt_n; i++) {
        if (n % i == 0)
        {
            min_divisor = i;
            break;
        }
    }
    if (min_divisor == 1)
        return true;
    else
        return false;
}

int main() {
    int n;
    cin >> n;
    if (IsPrime(n)) cout << "YES";
    else cout << "NO";
    return 0;
}