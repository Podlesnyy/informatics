#include <iostream>
#include<cmath>
int main()
{
    int N;
    std::cin >> N;
    std::cout << ceil(log10(N) / log10(2));
    return 0;
}