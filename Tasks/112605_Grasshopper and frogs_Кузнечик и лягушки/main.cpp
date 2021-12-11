#include <iostream>
#include <map>
using namespace std;

int N, K;
map<int, int> stolbi;

int count_stolbi(const int stolb)
{
	if (stolbi.find(stolb) != stolbi.end())
		return stolbi[stolb];

	int kol = 0;
	for (int i = 1; i < K + 1; i++)
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
	int lygushek;
	cin >> N >> K >> lygushek;
	if (lygushek > 0)
	{
		for (int i = 0; i < lygushek; i++)
		{
			int stolb_s_lygushkoy;
			cin >> stolb_s_lygushkoy;
			stolbi[stolb_s_lygushkoy] = 0;
		}
	}
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