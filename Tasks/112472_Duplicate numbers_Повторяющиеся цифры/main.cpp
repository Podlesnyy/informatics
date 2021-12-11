#include <set>
#include <iostream>
#include <iterator>
#include <string>
using namespace std;
int main() {
    string s;
    set <int> numbers;
    set <char> fin;
    getline(cin, s);
    for (int i = 0; i < s.size(); i++) {
        if (numbers.find(s[i]) != numbers.end()) {
            if (isdigit(s[i])) {
                fin.insert(s[i]);
            }
        }
        else {
            if (isdigit(s[i])) {
                numbers.insert(s[i]);
            }
        }
    }
    if (fin.empty()) {
        cout << "NO";
    }
    else {
        copy(fin.begin(), fin.end(), ostream_iterator<char>(cout, ""));
    }
}