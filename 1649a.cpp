#include <iostream>

int main() {
    int t = 0;
    int n = 0;
    int ans = 0;
    int now = 0;
    int flag = 0;
    int start = 0;
    std::cin >> t;
    while (t--) {
        flag = 0;
        ans = 0;
        start = 0;
        std::cin >> n;
        for (int i = 0; i < n; i++) {
            std::cin >> now;
            if (now == 0) {
                if (flag == 2)
                    ans = i - start + 1;
                else {
                    ans += 1;
                    flag = 1;
                }
            }
            if (now == 1) {
                if (flag == 1 && flag != 2) {
                    ans += 1;
                    flag = 2;
                }
                if (flag == 0)
                    start = i;
            }
        }
        std::cout << ans << std::endl;
    }
}
