#include <iostream>

int main() {
    int t = 0;
    int n = 0;
    int d1x = 0;
    int d1y = 0;
    int d2x = 0;
    int d2y = 0;
    int a1x = 0;
    int a1y = 0;
    int a2x = 0;
    int a2y = 0;
    bool flag = false;
    std::string row = "";
    std::cin >> t;
    while (t--) {
        flag = false;
        std::cin >> n;
        for (int i = 0; i < n; i++) {
            std::cin >> row;
            for (int j = 0; j < n; j++) {
                if ((row[j] == '*') && (flag == true)) {
                    d2x = i;
                    d2y = j;
                }
                if ((row[j] == '*') && (flag == false)) {
                    d1x = i;
                    d1y = j;
                    flag = true;
                }
            }
        }
        if ((d1x != d2x) && (d1y != d2y)) {
            a1x = d1x;
            a1y = d2y;
            a2x = d2x;
            a2y = d1y;
        }
        else {
            if (d1x == d2x) {
                if (d1x + 1 <= n) {
                    a1x = d1x + 1;
                    a1y = d1y;
                    a2x = d1x + 1;
                    a2y = d2y;
                }
                else {
                    a1x = d1x - 1;
                    a1y = d1y;
                    a2x = d1x - 1;
                    a2y = d2y;
                }
            }
            else {
                if (d1y + 1 <= n) {
                    a1x = d1x;
                    a1y = d1y + 1;
                    a2x = d2x;
                    a2y = d1y + 1;
                }
                else {
                    a1x = d1x;
                    a1y = d1y - 1;
                    a2x = d2x;
                    a2y = d1y - 1;
                }
            }
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if ((i == d1x && j == d1y) || (i == d2x && j == d2y) || (i == a1x && j == a1y) || (i == a2x && j == a2y))
                    std::cout << "*";
                else
                    std::cout << ".";
            }
            std::cout << std::endl;
        }
    }
}
