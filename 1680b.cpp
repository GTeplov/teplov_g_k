#include <iostream>

int main() {
    int t = 0;
    int n = 0;
    int m = 0;
    std::string now = "";
    std::cin >> t;
    while (t--) {
        int leftx = 100;
        int lefty = 100;
        int upx = 100;
        int upy = 100;
        std::cin >> n >> m;
        for (int i = 0; i < n; i++) {
            std::cin >> now;
            for (int j = 0; j < m; j++) {
                if (now[j] == 'R') {
                    if (j < lefty) {
                        lefty = j;
                        leftx = i;
                    }
                    if (i < upx) {
                        upx = i;
                        upy = j;
                    }
                }
            }
        }
        if (leftx == upx && lefty == upy)
            std::cout << "YES" << std::endl;
        else std::cout << "NO" << std::endl;
    }
}
