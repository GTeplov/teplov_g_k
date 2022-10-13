#include <iostream>
#include <vector>

int main() {
    int t = 0;
    int n = 0;
    int now = 0;
    int flag = 2;
    std::cin >> t;
    while (t--) {
        std::cin >> n;
        std::vector <int> a;
        int c = 1;
        while (n--) {
            std::cin >> now;
            if (now == 0) {
                flag = 1;
                c += 1;
            }
            else {
                for (int i = 0; i < a.size(); i++)
                    if (now == a[i]) {
                        flag = 1;
                        break;
                    }
            }
            a.push_back(now);
        }
        std::cout << flag - c + a.size() << std::endl;
    }
}
