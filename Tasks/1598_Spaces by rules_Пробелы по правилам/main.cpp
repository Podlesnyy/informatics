#include <iostream>
#include <sstream>
#include <string>
#include <iterator>
#include <algorithm>

int main() {
    std::string buf;
    std::getline(std::cin, buf);
    if (buf.empty())
        return 1;
    std::istringstream ist(buf);
    std::copy(std::istream_iterator<std::string>(ist), std::istream_iterator<std::string>(), std::ostream_iterator<std::string>(std::cout, " "));
    return 0;
}