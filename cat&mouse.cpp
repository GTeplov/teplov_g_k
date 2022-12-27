#include <iostream>
#include <cmath>
#include "geom.h"

bool AttacRad(Rdec2D &mouse, Rdec2D &cat, double radius) {
    return norm(mouse - cat) <= radius;
}

int main() {
    Rdec2D r_c{10, -1};
    Rdec2D r_m{-5, -20};

    double v0 = 6;
    Rdec2D v_c = (r_m - r_c) * (1 / norm(r_m - r_c)) * v0;
    Rdec2D v_m{0, -5};

    const double radius = 1e-5;
    double last = norm(r_m - r_c);

    double dt = 1e-6;
    double countTime = 0;
    bool delta = std::sin(ToPol(r_m - Rdec2D{1, 0}).phi) < 0;
    while (r_m.y < 0 && !AttacRad(r_m, r_c, radius)) {
        if (delta) {
            last = norm(r_m - r_c);
        }
        v_c = (r_m - r_c) * (1 / norm(r_m - r_c)) * v0;
        r_c = r_c + v_c * dt;
        r_m = r_m + v_m * dt;
        countTime += dt;
        if (delta && last < norm(r_m - r_c)) {
            break;
        }
    }

    if (r_m.y >= 0) {
        std::cout << "Mouse is survived in " << countTime << "\n";
        std::cout << r_c;
        std::cout << r_m;
    } else if (AttacRad(r_m, r_c, radius)) {
        std::cout << "Catch in " << countTime << "\n";
        std::cout << "Cat: " << r_c;
        std::cout << "Mouse: " << r_m;
    } else if (delta && last < norm(r_m - r_c)) {
        std::cout << last << " " << norm(r_m - r_c) << "\n";
        std::cout << v_c << v_m;
        std::cout << "Mouse run away in " << countTime << "\n";
    }
}
