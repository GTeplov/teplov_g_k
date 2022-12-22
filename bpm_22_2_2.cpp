#include <iostream>

int main() {
    double x = 0;
    double y = 0;
    int call = 0;
    double cgood = 0;
    while (std::cin) {
        call += 1;
        std::cin >> x >> y;
        if ((y >= std::abs(x)) && (y <= (2 - x * x))) {
            cgood += 1;
        }
    }
    std::cout << (cgood - 1) / (call - 1) << std::endl;
}

