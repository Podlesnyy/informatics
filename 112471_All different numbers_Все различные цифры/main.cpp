#include <iostream>
#include <cstring>
using namespace std;

bool a[10];
int main()
{
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); ++i)
        if (isdigit(s[i]))
        {
            int ind = s[i] - '0';
            a[ind] = true;
        }
    bool fl = false;
    for (int i = 0; i < 10; ++i)
        if (a[i])
        {
            fl = true;
            cout << i;
        }
    if (!fl)
        cout << "NO";
}