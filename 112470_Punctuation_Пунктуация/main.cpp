#include <iostream>
#include <string>

int main()
{
    std::string str;
    getline(std::cin, str);
    int count = 0;
    for (size_t i = 0; i < str.length(); i++)
        if (str[i] == '.' || str[i] == ',' || str[i] == ';' || str[i] == ':' || str[i] == '!' || str[i] == '?')
            count++;
    std::cout << count << std::endl;
}