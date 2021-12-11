#include <iostream>
#include <fstream>
#include <vector>
#include <iomanip>
using namespace std;

int main(){
	unsigned int N, M, T;
	cin >> N >> M;
	T = 1;
	vector <int> gamers(N);
	for (int i = 0; i < N; i++) gamers[i] = i + 1;
	int i = N, vib;
	T--;
	while (i > 1)
	{
		vib = (M % i + T) % i;
		if (!vib) vib = i; vib--;
		cout << gamers[vib] << " ";
		T = vib;
		gamers.erase(gamers.begin() + vib);
		i--;
	}
	cout << gamers[0] << " ";
	system("pause");
	return 0;
}