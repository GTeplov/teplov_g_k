#include <iostream>
#include <cmath>

int main() {
    int t = 0;
    int n = 0;
    int cs = 0;
    int now = 0;
    int p = 0;
    int c = 0;
    bool flag = true;
    std::cin >> t;
    while (t--) {
        cs = 0;
        flag = true;
        std::cin >> n;
        for (int i = 0; i < n; i++) {
            std::cin >> now;
            if (now == 0) {
                flag = false;
                break;
            }
            while (now % 2 == 0) {
                cs += 1;
                now /= 2;
            }
        }
        if (flag == false) {
            std::cout << -1 << std::endl;
            continue;
        }
        if (cs >= n) {
            std::cout << 0 << std::endl;
            continue;
        }
        p = int(std::log2(n));
        c = 0;
        while (p > 0) {
            cs += p;
            c += 1;
            p -= 1;
            if (cs >= n) break;
        }
        if (cs >= n) std::cout << c << std::endl;
        else std::cout << -1 << std:: endl;
    }
}
