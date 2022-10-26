#include <iostream>

int main() {
    int t = 0;
    int n = 0;
    int ans = 0;
    int green = 0;
    char c = ' ';
    std::string s = "";
    std::cin >> t;
    while (t--) {
        ans = 0;
        green = 0;
        std::cin >> n;
        std::cin >> c;
        std::cin >> s;
        s += s;
        for (int i = 2 * n - 1; i >= 0; i--) {
            if (s[i] == 'g')
                green = i;
            if (s[i] == c)
                ans = std::max(ans, green - i);
        }
        std::cout << ans << std::endl;
    }
}
