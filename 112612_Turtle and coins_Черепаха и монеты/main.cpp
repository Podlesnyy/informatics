#include<algorithm>
#include<iostream>
#include<map>
#include<vector>

using namespace std;

int N, M;
vector<vector<int>> moneti;
vector<vector<int>> max_monet;
vector<vector<bool>> steps;


void calc()
{
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			if (i ==0 && j==0)
			{
				max_monet[i][j] = moneti[i][j];
			}
			else if( i == 0 )
			{
				max_monet[i][j] = max_monet[i][j - 1] + moneti[i][j];
				steps[i][j] = true;
			}
			else if (j == 0)
			{
				max_monet[i][j] = max_monet[i - 1][j] + moneti[i][j];
				steps[i][j] = false;
			}
			else
			{
				if (max_monet[i][j - 1] > max_monet[i - 1][j])
				{
					max_monet[i][j] = max_monet[i][j - 1] + moneti[i][j];
					steps[i][j] = true;
				}
				else
				{
					max_monet[i][j] = max_monet[i - 1][j] + moneti[i][j];
					steps[i][j] = false;
				}
			}
		}
	}
}


int main()
{
	cin >> N >> M;
	for (int i = 0; i < N; i++)
	{
		vector<int> row;
		for (int j = 0; j < M; j++)
		{
			int a;
			cin >> a;
			row.push_back(a);
		}
		moneti.push_back(row);
	}
	max_monet.resize(N, vector<int>(M));
	steps.resize(N, vector<bool>(M));

	calc();
	string path;
	int i = N - 1;
	int j = M - 1;
	while (i > 0 || j > 0)
	{
		const bool step = steps[i][j];
		path += step ? 'R' : 'D';
		(step ? j : i)--;
	}

	reverse(path.begin(), path.end());

	cout << max_monet[N - 1][M - 1] << endl << path;


	return 0;
}