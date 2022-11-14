#include <iostream>

int main() {
    int n = 0;
    int64_t k = 0;
    int ans = 0;
    int now = 0;
    int cnt = -1;
    std::cin >> n >> k;
    while (n--) {
        std::cin >> now;
        if (ans == 0) ans = now;
        if (now > ans) {
            ans = now;
            cnt = 1;
        }
        else cnt += 1;
        if (cnt == k)
            break;
    }
    std::cout << ans << std::endl;
}
