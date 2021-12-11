#include <iostream>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    if (M > N) {
        swap(N, M);
    }
    long long znam = 1, kol_ways = 1;
    for (int i = 0; i < M - 1; i++) {
        kol_ways *= N + i;
        if (kol_ways % znam == 0) {
            kol_ways /= znam;
            znam++;
        }
    }
    cout << kol_ways;
    system("pause");
    return 0;
}