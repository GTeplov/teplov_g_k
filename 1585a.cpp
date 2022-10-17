#include <iostream>
#include <vector>

int main() {
    int t = 0;
    int n = 0;
    int flower = 1;
    std::cin >> t;
    while (t--) {
        flower = 1;
        std::cin >> n;
        std::vector <int> a(n);
        for (int i = 0; i < n; i++)
            std::cin >> a[i];
        for (int i = 0; i < n; i++) {
            if (i != 0 && a[i] == 0 && a[i - 1] == 0) {
                flower = -1;
                break;
            }
            if (i != 0 && a[i] == 1) {
                if (a[i - 1] == 0)
                    flower += 1;
                else flower += 5;
            }
            if (i == 0 && a[i] == 1)
                flower += 1;
        }
        std::cout << flower << std::endl;
    }
}
