#include <iostream>
#include <map>
using namespace std;

int N;
map<int, int> stolbi;

int count_stolbi(const int stolb)
{
	if (stolbi.find(stolb) != stolbi.end())
		return stolbi[stolb];

	int kol = 0;
	for (int i = 1; i < 2 + 1; i++)
	{
		if (stolb + i > N)
			break;
		if (stolb + i == N)
		{
			kol += 1;
		}
		kol += count_stolbi(stolb + i);
	}
	stolbi[stolb] = kol;
	return kol;
}

int main()
{
	cin >> N;
	if (N == 1)
	{
		cout << 1;
	}
	else
	{
		count_stolbi(1);
		cout << stolbi[1];
	}
}