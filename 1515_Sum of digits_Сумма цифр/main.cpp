#include<iostream>
using namespace std;

int main(){
	int a, count = 0, digit;
	cin >> a;
	while (a != 0) {
		digit = a % 10;
		count += digit;
		a = a / 10;
	}
	cout << count;
	cout << endl;
	system("pause");
	return 0;

}