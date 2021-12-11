#include <iostream>
#include <string>
using namespace std;

int main() {
    string s, str;
    getline(cin, str);
    for(int i = 0; i<str.length(); i++)
    {
        if (str[i] != ' ')
            s.push_back(str[i]);
    }
    if (s.empty())
    {
        cout << "YES";
        return 0;
    }
    bool palindrom = true;
    for (int i = 0; i <= s.length() / 2; i++)
    {
        if (s.at(i) != s.at(s.length() - 1 - i))
        {
            palindrom = false;
            break;
        }
    }
    cout << (palindrom ? "YES" : "NO");
    return 0;
}