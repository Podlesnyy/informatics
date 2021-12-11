#include <iostream>
using namespace std;

int main() {
    int N, c = 0; 
    cin >> N;
    int** matrix;
    matrix = new int* [N];

    for (int i = 0; i < N; i++)
        matrix[i] = new int[N];

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> matrix[i][j];
        }
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < i; j++) {
            if (matrix[i][j] || matrix[j][i]) {
                c++;
            }

        }
    }

    cout << c;
    cout << endl;
    system("pause");
    return 0;
}