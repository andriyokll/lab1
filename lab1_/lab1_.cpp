#include <iostream>

int main() {
    int n;
    std::cout << "Enter Number: ";
    std::cin >> n;

    for (int i = 0; i < n; ++i) {

        for (int j = 0; j < i; ++j) {
            std::cout << " ";
        }

        for (int k = 0; k < 2 * (n - i) - 1; ++k) {
            std::cout << i;
        }

        std::cout << std::endl;
    }

    return 0;
}