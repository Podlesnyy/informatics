#include<iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

vector<vector<int>> mx2lst(int n) {
    vector<vector<int>> lst(n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int x; cin >> x;
            if (x == 1)
                lst[i].push_back(j + 1);
        }
    }
    return lst;
}

int main()
{
    int n; cin >> n;
    vector<vector<int>> g = mx2lst(n);
    int s = 0;
    queue<int> q;
    q.push(s);
    vector<bool> used(n);
    used[s] = true;
    while (!q.empty()) {
        int v = q.front();
        q.pop();
        for (size_t i = 0; i < g[v].size(); ++i) {
            if (g[v].size() > 0) {
                int to = g[v][i] - 1;
                if (!used[to]) {
                    used[to] = 1;
                    q.push(to);
                }
            }
        }
    }
    vector<bool>::iterator it;
    it = find(used.begin(), used.end(), false);
    if (it == used.end())
        cout << "YES";
    else
        cout << "NO";
    system("pause");
    return 0;
}