#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int n = 0;
    int m = 0;
    int ans = 1;
    std::cin >> n;
    std::vector <int> a(n);
    for (int i = 0; i < n; i++)
        std::cin >> a[i];
    std::sort(a.begin(), a.end());
    for (int i = 0; i < n; i++) {
        if (a[i] >= ans) ans += 1;
    }
    std::cout << ans - 1 << std::endl;
}
