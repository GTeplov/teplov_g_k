#include <iostream>
#include <cmath>
#include <iomanip>

int fact(int num) {
    if (num == 0)
        return 1;
    int ans = 1;
    for (int i = 1; i <= num; i++)
        ans *= i;
    return ans;
}

int main() {
    int a = -1;
    int b = 1;
    double delta = 0.1;
    double eps = pow(10, -3);
    double s = 0;
    double y = 0;
    double now = 0;
    std::cout << "x" << '\t' << "s(x)" << '\t' << "f(x)" << std::endl;
    for (double x = a; x <= b; x += delta) {
        if (fabs(x) < pow(10, -15))
            x = 0;
        s = 0;
        for (int i = 0; i < 100; i++) {
            now = pow(-1, i) * (pow(x, 2 * i) / fact(2 * i));
            if (fabs(now) >= eps)
                s += now;
            else {
                y = cos(x);
                std::cout << std::setprecision(5) << x << '\t' << s << '\t' << y << std::endl;
                break;
            }
        }
    }
}

