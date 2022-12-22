#include <iostream>
#include <cmath>
#include <iomanip>
#define _USE_MATH_DEFINES

int main() {
    double a = 0.1;
    double b = 1;
    double delta = 0.05;
    double eps = pow(10, -4);
    double s = 0;
    double now = 0;
    std::cout << "x" << '\t' << "s(x)" << std::endl;
    for (double x = a; x <= b + delta; x += delta) {
        s = 0;
        for (int i = 0; i < 10000; i++) {
            now = pow(-1, i) * ((pow(x, 2 * i + 1)) / (2 * i + 1));
            if (std::abs(now) >= eps)
                s += now;
            else {
                std::cout << std::setprecision(6) << x << '\t' << s << std::endl;
                break;
            }
        }
    }
}

