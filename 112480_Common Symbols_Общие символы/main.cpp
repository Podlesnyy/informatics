#include <iostream>
#include <string>
#include <set>
#include<vector>
#include <algorithm>
#include <iterator>
int main()
{
    std::string s1, s2;  std::cin >> s1 >> s2;
    std::set<char> a, b;
    std::vector<char> intersection;
    for (int i = 0; i < s1.length(); ++i)
    {
        a.insert(s1[i]);
    }
    for (int i = 0; i < s2.length(); ++i)
    {
        b.insert(s2[i]);
    }

    std::set_intersection(a.begin(), a.end(), b.begin(), b.end(), std::back_inserter(intersection));

    if (intersection.size() != 0)
    {
        for (char i : intersection)
        {
            std::cout << i;
        }
    }
    else std::cout << "NO";
    system("pause");
    return 0;
}