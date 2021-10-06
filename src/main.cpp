#include "ioHelper.hpp"
#include <iostream>

int main(int argc, char* argv[]) {
    print_string("Hello World!\n");
    print_string("Press enter to continue...");
    std::cin.get();
    print_string("\n");
}
