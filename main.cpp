#include <iostream>
#include <vector>
#include <string>

int main() {
    std::vector<std::string> msg {"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"};
    for (auto &&i : msg)
    {
        std::cout << i << " ";
    }
    
    std::cout << std::endl;
    return 0;
}