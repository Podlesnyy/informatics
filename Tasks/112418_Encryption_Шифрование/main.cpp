#include <bits/stdc++.h>
 
    using namespace std;
 
char charEncode(char c, int k) {
    char a, b;
    if (isupper(c)) {
        if (int(c) + k > 90) {
            a = k + int(c) - 26;
            b = char(a);
        } else {
            b = char(c + k);
        }
    } else if (islower(c)) {
        if (int(c) + k > 122) {
            a = k + int(c) - 26;
            b = char(a);
        } else {
            b = char(c + k);
        }
    }
    return b;
}
 
string wordEncode(string s, int k) {
    string b;
    for (int i = 0; s[i]; i++) {
        if (!(isalpha(s[i]))) {
            b += s[i];
        } else {
            b += charEncode(s[i], k);
        }
    }
    return b;
}
 
int main() {
    string str, s, result;
    getline(cin, str);
    str += " ";
    for (int i = 0; i < str.size(); i++) {
        s += str[i];
        if (!isalpha(str[i])) {
            s.pop_back();
            result += wordEncode(s, s.size());
            if (i != str.size() - 1) result += str[i];
            s = "";
        }
    }
    cout << result << "\n";
    system("pause");
    return 0;
}