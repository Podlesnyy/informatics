#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "rus");
    int n;
    cin >> n;
    int* digitals = new int[n];

    for (int i = 0; i < n; i++) {
        cin >> digitals[i];
    }

    bool flajok = true;
    for (int i = n - 1; i > 0; i--) {
        bool flag = true;
        for (int j = n - 1; j > 0; j--) {
            if (digitals[j] < digitals[j - 1]) {
                flag = false;
                flajok = false;
                swap(digitals[j], digitals[j - 1]);
            }
        }

        if (flag) {
            break;
        }
        else
        {
            for (int i1 = 0; i1 < n; i1++) {
                cout << digitals[i1] << " ";
            }
            cout << endl;
        }
    }

    if (flajok)
        for (int i1 = 0; i1 < n; i1++) {
            cout << digitals[i1] << " ";
        }

    system("pause");
    return 0;
}