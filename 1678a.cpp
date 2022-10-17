#include <iostream>
#include <vector>

int main() {
    int t = 0;
    int n = 0;
    int zeros = 0;
    int now = 0;
    bool same = false;
    std::cin >> t;
    while (t--) {
        zeros = 0;
        same = false;
        std::vector <int> a;
        std::cin >> n;
        for (int i = 0; i < n; i++) {
            std::cin >> now;
            if (now == 0)
                zeros += 1;
            if (zeros == 0) {
                for (int j = 0; j < a.size(); j++) {
                    if (a[j] == now) {
                        same = true;
                        break;
                    }
                }
            }
            a.push_back(now);
        }
        std::cout << n + !(same) * !(zeros) - zeros << std::endl;
    }
}
