#include<iostream>
using namespace std;

int main() {
	int f1 = 1, f2 = 1, it = 2, n;
	cin >> n;
	while (f2 < n) {
		int tmp = f2;
		f2 += f1;
		f1 = tmp;
		it++;
	}
	if (f2 == n)
		cout << it;
	else 
		cout << -1;
	return 0;
}