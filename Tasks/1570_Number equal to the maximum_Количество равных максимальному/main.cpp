#include <iostream>
using namespace std;

int main()
{
	int a, b[101], count=0;
	cin >> a;
	for (int c = 0; c < a; c++) {
		cin >> b[c];
	}
	int  max = -3000;
	for (int d = 0; d < a; d++)
	{
		if (b[d] > max)
			max = b[d];
	}
	for (int c = 0; c < a; c++) {
		if (b[c] == max) {
			count++;
		}
	}
	cout << count;
	cout << endl;
	system("pause");
	return 0;
}