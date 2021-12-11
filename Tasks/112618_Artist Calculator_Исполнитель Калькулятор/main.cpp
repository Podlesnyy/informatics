#include<iostream>

using namespace std;

int f(int a, int b) {
	if (a > b) {
		return 0;
	}
	if (a == b) {
		return 1;	
	}
	if (b % 3 == 0){
		return f(a, b - 1) + f(a, b / 3);
	}
	return f(a, b - 1);
}

int main()
{
	int a, b;
	cin >> a >> b;
	cout << f(a, b) << endl;
	return 0;
}