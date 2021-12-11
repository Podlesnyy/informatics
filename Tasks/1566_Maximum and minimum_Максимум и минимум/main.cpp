#include <stdlib.h>
#include <iostream> 
using namespace std;
int main()
{
	setlocale(LC_CTYPE, "Russian");
	int n;
	cin >> n;
	int v[100];
	for (int i = 0; i < n; i++)
	{
		cin >> v[i];			//ввели элемент		
	}
	int min = 0, max = 0;
	for (int i = 0; i < n; i++)
	{
		if (v[i] < v[min])			//находим минимум
			min = i;
		if (v[i] > v[max])			//находим максимум
			max = i;
	}
	int tmp = v[max];				//меняем местами
	v[max] = v[min];
	v[min] = tmp;
	for (int i = 0; i < n; i++)
	{
		cout << v[i] << " ";
	}
	cout << endl;
	system("PAUSE");
}