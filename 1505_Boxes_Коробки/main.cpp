#include <iostream>
const int size = 3;
using namespace std;
int main() {
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int a[size], b[size], tempa = 0, tempb = 0;
    cin >> a[0] >> a[1] >> a[2]
        >> b[0] >> b[1] >> b[2];
    for (int i = 0; i < size; ++i) {
        for (int j = size - 1; j > i; j--) {
            if (a[j - 1] < a[j]) {
                tempa = a[j - 1];
                a[j - 1] = a[j];
                a[j] = tempa;
            }
        }
    }
    for (int i = 0; i < size; ++i) {
        for (int j = size - 1; j > i; j--) {
            if (b[j - 1] < b[j]) {
                tempb = b[j - 1];
                b[j - 1] = b[j];
                b[j] = tempb;
            }
        }
    }
    if (a[0] > b[0])
        if (a[1] >= b[1])
            if (a[2] >= b[2])
                cout << "The first box is larger than the second one";
            else
                cout << "Boxes are incomparable";
        else
            cout << "Boxes are incomparable";
    else
        if (a[0] < b[0])
            if (a[1] <= b[1])
                if (a[2] <= b[2])
                    cout << "The first box is smaller than the second one";
                else
                    cout << "Boxes are incomparable";
            else
                cout << "Boxes are incomparable";
        else
            if (a[1] > b[1])
                if (a[2] >= b[2])
                    cout << "The first box is larger than the second one";
                else
                    cout << "Boxes are incomparable";
            else
                if (a[1] < b[1])
                    if (a[2] <= b[2])
                        cout << "The first box is smaller than the second one";
                    else
                        cout << "Boxes are incomparable";
                else
                    if (a[2] > b[2])
                        cout << "The first box is larger than the second one";
                    else
                        if (a[2] < b[2])
                            cout << "The first box is smaller than the second one";
                        else
                            cout << "Boxes are equal";
    system("pause >> void");
    return 0;
}