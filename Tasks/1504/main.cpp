#include <iostream>
#include <iomanip>
#include <cmath>


int main()
{
    double a, b, c;
    std::cin >> a >> b >> c;
    if (a == 0 && b == 0)
    {
        if (c == 0)
        {
            std::cout << -1;
            return 0;
        }
        else
        {
            std::cout << 0;
            return 0;
        }
    }

    if (a == 0)
    {
        std::cout << 1 << " " << std::fixed << std::setprecision(2) << -c * 1.0 / b;
        return 0;
    }

    long discrimenant = b * b - 4 * a * c;
    if (discrimenant < 0)
    {
        std::cout << 0;
        return 0;
    }

    if (discrimenant == 0)
    {
        std::cout << 3 << " " << std::fixed << std::setprecision(2) << -1.0*b/(2.0*a);
        return 0;
    }
   
    double x1 = (-1.0 * b + std::sqrt(discrimenant)) / (2.0 * a);
    double x2 = (-1.0 * b - std::sqrt(discrimenant)) / (2.0 * a);
    if (x1 < x2) {
        std::cout << 2 << " " << std::fixed << std::setprecision(2) << x1 << " " << x2;
    }
    else if(x2<x1) {
        std::cout << 2 << " " << std::fixed << std::setprecision(2) << x2 << " " << x1;
    }
    return 0;
}