#include <iostream>

int main() {
    int t = 0;
    bool flag1 = true;
    bool flag2 = true;
    int one = 0;
    int two = 0;
    int now = 0;
    int n = 0;
    std::cin >> t;
    while (t--) {
        flag1 = true;
        flag2 = true;
        one = 0;
        two = 0;
        std::cin >> n;
        for (int i = 1; i <= n; i++) {
            std::cin >> now;
            if (i % 2 == 1) {
                if (one == 0)
                    one = now;
                else if (one % 2 != now % 2)
                    flag1 = false;
            }
            else {
                if (two == 0)
                    two = now;
                else if (two % 2 != now % 2)
                    flag2 = false;
            }
        }
        if (flag1 == false || flag2 == false)
            std::cout << "NO" << std::endl;
        else std::cout << "YES" << std::endl;
    }
}
