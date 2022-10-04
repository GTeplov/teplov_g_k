#include <iostream>
#include <vector>

int main() {
    int n = 0, now = 0, c = 0;
    std::cin >> n;
    c = n;
    std::vector <int> a;
    for (int i = 0; i < n; i++) {
        std::cin >> now;
        a.push_back(now);
    }
    for (int i = n - 1; i >= 0; i--) {
        now = a[i];
        if (now != 0) {
            for (int j = 0; j < i; j++) {
            if (a[j] == now) {
                a[j] = 0;
                c -= 1;
                }
            }
        }
    }
    std::cout << c << std::endl;
    for (int i = 0; i < n; i++) {
        if (a[i] != 0)
            std::cout << a[i] << " ";
    }
}
