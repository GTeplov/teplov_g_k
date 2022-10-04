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
    int a = 0;
    int b = 1;
    double delta = 0.05;
    double eps = pow(10, -3);
    double s = 0;
    double y = 0;
    double now = 0;
    std::cout << "x" << '\t' << "s(x)" << '\t' << "f(x)" << std::endl;
    for (double x = a; x <= b + delta; x += delta) {
        s = 0;
        for (int i = 1; i < 100; i++) {
            now = pow(x, i) * sin(i * M_PI_4);
            if (fabs(now) >= eps)
                s += now;
            else {
                y = (x * sin(M_PI_4)) / (1 - 2 * x * cos(M_PI_4));
                std::cout << std::setprecision(4) << x << '\t' << s << '\t' << y << std::endl;
                break;
            }
        }
    }
}

