#include <iostream>

void pause() {
    std::cout << "Enter any key to exit\n";
    std::getchar();
}

int main() {
    std::cout << "Hello world!\n";
    std::cout << "Make a change to the branch.....\n";
    pause();
}
