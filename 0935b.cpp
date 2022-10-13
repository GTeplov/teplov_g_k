#include <iostream>

int main() {
    int n = 0;
    std::string path = "";
    int x = 0;
    int y = 0;
    int c = 0;
    int prev = 0; // previous kingdom flag
    int now = 0; // current kingdom flag
    std::cin >> n;
    std::cin >> path;
    for (int i = 0; i < n; i++) {
        if (path[i] == 'U')
            y += 1;
        else
            x += 1;
        if (y > x)
            now = 1;
        if (y < x)
            now = 0;
        if ((i != 0) && (now != prev))
            c += 1;
        prev = now;
    }
    std::cout << c << std::endl;
}
