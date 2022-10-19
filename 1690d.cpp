#include <iostream>

int main() {
    int t = 0;
    int n = 0;
    int k = 0;
    int ans = 0;
    int cw = 0;
    std::string now = "";
    std::cin >> t;
    while (t--) {
        ans = 0;
        std::cin >> n >> k;
        std::cin >> now;
        for (int i = 0; i < k; i++)
            if (now[i] == 'W') {
                ans += 1;
                cw = ans;
            }
        for (int i = 1; i <= n - k; i++) {
            if (now[i - 1] == 'W')
                cw -= 1;


            if (now[i + k - 1] == 'W')
                cw += 1;
            ans = std::min(ans, cw);
        }
        std::cout << ans << std::endl;
    }
}
