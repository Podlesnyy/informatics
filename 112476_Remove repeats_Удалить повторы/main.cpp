#include <iostream>
#include <string>
#include <vector>


int main()
{
    // прочитать строку - вполне себе динамический массив
    std::string input;
    std::getline(std::cin, input);

    // все возможное символы от 0x00 до 0xFF, false - пока ни одного не встретили
    std::vector<bool> chars(256, false);
    std::string output;

    // перебрать символы входной строки, в выход идет только впервые увиденный
    for (const auto c : input)
    {
        if (!chars[c])
        {
            output += c;
            chars[c] = true;
        }
    }

    std::cout << output << std::endl;
    return 0;
}