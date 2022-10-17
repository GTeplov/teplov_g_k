#include <iostream>

int main() {
    int t = 0;
    int x = 0;
    int y = 0;
    std::string now = "";
    std::cin >> t;
    while (t--) {
        x = 0;
        y = 0;
        for (int i = 0; i < 8; i++) {
            std::cin >> now;
            for (int j = 0; j < 8 - 2; j++) {
                if (now[j] == '#' && now[j + 2] == '#' && x == 0 && y == 0) {
                    x = i + 2;
                    y = j + 2;
                }
            }
        }
        std::cout << x << " " << y << std::endl;
    }
}
