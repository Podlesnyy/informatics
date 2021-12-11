#include <iostream>
#include <vector>

using std::vector;
using std::string;

vector<unsigned long> pos(const string &str, const string &find_str) {
    vector<unsigned long> vec;
    for (auto i = 0; i < str.size(); ) {
        auto index_input = str.find(find_str, i);
        if (index_input != string::npos) {
            vec.push_back(index_input);
            i = index_input + 1;
        }
        else
            break;
    }
    return vec;
}

int main() {
    string str;
    string find_str;
    std::cin >> str >> find_str;

    auto vec = pos(str, find_str);
    if (vec.size() == 0) {
        std::cout << 0;
    } else {
        for (auto i = vec.begin(); i != vec.end(); ++i)
            std::cout << *i + 1 << ' ';
    }
    return 0;
}