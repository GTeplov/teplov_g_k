#include <iostream>

int main() {
    int t = 0, a = 0, b = 0, c = 0, one = 0, two = 0;
    std::cin >> t;
    for (int i = 0; i < t; i++) {
        std::cin >> a >> b >> c;
        one = a - 1;
        two = abs(b - c) + c - 1;
        if (one < two) std::cout << 1 << std::endl;
        else if (two < one) std::cout << 2 << std::endl;
        else std::cout << 3 << std::endl;
    }
}
