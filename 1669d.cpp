#include <iostream>

int main() {
    int t = 0;
    int n = 0;
    int c = 0;
    bool flag = true;
    bool diff = false;
    std::string now = "";
    std::cin >> t;
    while (t--) {
        c = 0;
        flag = true;
        diff = false;
        std::cin >> n;
        std::cin >> now;
        now += 'W';
        for (int i = 0; i <= n; i++) {
            if (now[i] == 'W') {
                if ((c == 1) || (c != 0 && diff == false)) {
                    flag = false;
                    break;
                }
                else {
                    c = 0;
                    diff = false;
                }
            }
            else {
                c += 1;
                if (now[i + 1] != 'W' && now[i] != now[i + 1])
                    diff = true;
            }
        }
        if (flag == true) std::cout << "YES" << std::endl;
        else std::cout << "NO" << std::endl;
    }
}
