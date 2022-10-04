#include <iostream>
#include <cmath>
#include <iomanip>
#define _USE_MATH_DEFINES

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
    double delta = 0.1;
    double eps = pow(10, -4);
    double s = 0;
    double y = 0;
    double now = 0;
    std::cout << "x" << '\t' << "s(x)" << '\t' << "f(x)" << std::endl;
    for (double x = a; x <= b; x += delta) {
        s = 0;
        for (int i = 0; i < 100; i++) {
            now = pow(2 * x, i) / fact(i);
            if (fabs(now) >= eps)
                s += now;
            else {
                y = pow(M_E, 2 * x);
                std::cout << std::setprecision(6) << x << '\t' << s << '\t' << y << std::endl;
                break;
            }
        }
    }
}

