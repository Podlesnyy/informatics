#include <iostream>   // for std::cout/std::cin
#include <vector>     // for std::vector
#include <algorithm>  // for std::sort
using namespace std;

int get_ways(int N, vector<int> coins) {
    vector<int> ways;
    for (int i = 0; i < N + 1; i++) {
        ways.push_back(0);
    }
    ways[0] = 1;
    for (int i = 0; i < coins.size(); i++) {
        for (int j = 0; j < ways.size(); j++) {
            if (coins[i] <= j) {
                ways[j] += ways[j - coins[i]];
            }
        }
    }
    return ways[N];
}



int main()
{
    int money;
    cin >> money;
    vector<int> coins;
    coins.push_back(1);
    coins.push_back(2);
    coins.push_back(5);
    coins.push_back(10);
    cout << get_ways(money, coins);
    return 0;
}