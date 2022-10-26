#include <iostream>

int main() {
    int t = 0;
    int one = 0;
    std::string now = "";
    std::cin >> t;
    while (t--) {
        std::cin >> now;
        if (now[0] == '0' || now[now.size() - 1] == '1') {
            std::cout << 1 << std::endl;
            continue;
        }
        one = 0;
        now[now.size() - 1] = '0';
        for (int i = 0; i < now.size(); i++) {
            if (now[i] == '1')
                one = i;
            if (now[i] == '0') {
                std::cout << i - one + 1 << std::endl;
                break;
            }
        }
    }
}
