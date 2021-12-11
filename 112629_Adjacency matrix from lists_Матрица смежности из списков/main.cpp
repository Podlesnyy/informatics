#include <iostream>
#include <vector>
#include <string>
#include <sstream>
using namespace std;

vector<string> split(string s, char c = ' ') {
    string str = "";
    vector<string> ans;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == c) {
            ans.push_back(str);
            str = "";
        }
        else {
            str += s[i];
        }
    }
    ans.push_back(str);
    return ans;
}

template <typename T>
void print_v2(vector<vector<T>> v) {
    for (auto i : v) {
        for (auto j : i) {
            cout << j << ' ';
        }
        cout << endl;
    }
}

int main() {
    string str;
    getline(cin, str);
    int n = stoi(str);
    vector<vector<int>> matrix(n, vector<int>(n, 0));
    for (int i = 0; i < n; i++) {
        string s; 
        getline(cin, s);
        for (string cur : split(s)) {
            int x = stoi(cur);
            if (x != 0) {
                matrix[i][x - 1] = 1;
            }
        }
    }
    print_v2(matrix);
    system("pause");
    return 0;
}