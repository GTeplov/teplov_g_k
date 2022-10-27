#include <iostream>

int main() {
    int n = 0;
    int c = 0;
    std::cin >> n;
    while (n != 0) {
        c += n & 1;
        n >>= 1;
    }
    std::cout << c;
}
