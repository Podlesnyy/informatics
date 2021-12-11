#include <iostream>
#include <cmath>
#include <iomanip>


using namespace std;

int main() {
    double a, count2 = 0, sred;
    int count1 = -1;
    do {
        cin >> a;
        count1++;
        count2+=a;
    } while (a != 0);
    cout << fixed << setprecision(2) << count2 / count1;
    cout << endl;
    system("pause");
    return 0;
}