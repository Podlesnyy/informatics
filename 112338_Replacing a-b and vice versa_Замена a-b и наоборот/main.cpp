#include<iostream>
#include<cstring>
using namespace std;
int main() {
	string s;
	long long count=0;
	cin >> s;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == 'a') {
			s[i]='b';
			count++;
		}
		else if (s[i] == 'b') {
			s[i]='a';
			count++;
		}
		else if (s[i] == 'A') {
			s[i]='B';
			count++;
		}
		else if (s[i] == 'B') {
			s[i]='A';
			count++;
		}
	}
	cout << s << endl;
	cout << count;
	return 0;
}