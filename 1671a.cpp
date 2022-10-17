#include <iostream>

int main() {
    int t = 0;
    int ca = 0;
    int cb = 0;
    bool flag = true;
    std::string a = "";
    std::cin >> t;
    while (t--) {
        ca = 0;
        cb = 0;
        flag = true;
        std::cin >> a;
        a += 'c';
        for (int i = 0; i < a.size() - 1; i++) {
            if (a[i] == 'a') {
                ca += 1;
                if (a[i + 1] != 'a') {
                    if (ca == 1) {
                        flag = false;
                        break;
                    }
                    ca = 0;
                }
            }
            if (a[i] == 'b') {
                cb += 1;
                if (a[i + 1] != 'b') {
                    if (cb == 1) {
                        flag = false;
                        break;
                    }
                    cb = 0;
                }
            }
        }
        if (flag == true)
            std::cout << "YES" << std::endl;
        else std::cout << "NO" << std::endl;
    }
}
