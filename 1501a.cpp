#include <iostream>
#include <vector>

int ceil(int a, int b) {
    double dev = (double)a / (double)b;
    if (dev == a / b)
        return a / b;
    return dev + 1;
}

int main() {
    int t = 0;
    int n = 0;
    int c = 0;
    int way = 0;
    std::cin >> t;
    while (t--) {
        c = 0;
        std::cin >> n;
        std::vector <int> a(n);
        std::vector <int> b(n);
        std::vector <int> t(n);
        for (int i = 0; i < n; i++) {
            std::cin >> a[i];
            std::cin >> b[i];
        }
        for (int i = 0; i < n; i++)
            std::cin >> t[i];
        for (int i = 0; i < n; i++) {
            if (i != 0)
                way = a[i] - b[i - 1] + t[i];
            else
                way = a[i] + t[i];
            c += way;
            if (i != n - 1) {
                if (c + ceil(b[i] - a[i], 2) <= b[i])
                    c += b[i] - c;
                else
                    c += ceil(b[i] - a[i], 2);
            }
        }
        std::cout << c << std::endl;
    }
}
