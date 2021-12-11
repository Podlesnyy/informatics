#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main() {
	int k, l, m, n;
	cin >> k >> l >> m >> n;
	if ((k == m) || (l == n) || (k + l == m + n) || (k - m == l - n)){
		cout << "YES";
	}
	else {
		cout << "NO";
	}
	cout << endl;
	system("PAUSE");
	return 0;
}