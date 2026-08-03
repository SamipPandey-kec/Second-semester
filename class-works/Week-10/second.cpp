#include <fstream>
#include <iostream>
#include <system_error>

int main() {
    std::fstream file("abc.txt", std::ios::in | std::ios::out | std::ios::app);

    if (!file.is_open()) {
        std::cerr << "Error: Unable to open 'abc.txt'\n";
        return 1;
    }

    file << "hello world\n";

    return 0;
}