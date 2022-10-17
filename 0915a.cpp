#include <iostream>

int main() {
    int n = 0;
    int k = 0;
    int ans = 1000000;
    int now = 0;
    std::cin >> n;
    std::cin >> k;
    while (n--) {
        std::cin >> now;
        if (k % now == 0)
            ans = std::min(ans, k / now);
    }
    std::cout << ans;
}
