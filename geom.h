#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>

// Decart
struct Rdec2D {
    double x = 0.0;
    double y = 0.0;
};

std::ostream& operator << (std::ostream& ostrm, const Rdec2D& v) {
    ostrm << '(' << v.x << ", " << v.y << ')';
    return ostrm;
}

Rdec2D& operator += (Rdec2D& lhs, const Rdec2D& rhs) {
    lhs.x += rhs.x;
    lhs.y += rhs.y;
    return lhs;
}

Rdec2D operator + (const Rdec2D& lhs, const Rdec2D& rhs) {
    Rdec2D res = lhs;
    res += rhs;
    return res;
}

Rdec2D& operator -= (Rdec2D& lhs, const Rdec2D& rhs) {
    lhs.x -= rhs.x;
    lhs.y -= rhs.y;
    return lhs;
}

Rdec2D operator - (const Rdec2D& lhs, const Rdec2D& rhs) {
    Rdec2D res = lhs;
    res -= rhs;
    return res;
}

Rdec2D& operator *= (Rdec2D& lhs, double a) {
    lhs.x *= a;
    lhs.y *= a;
    return lhs;
}

Rdec2D operator * (const Rdec2D& lhs, double a) {
    Rdec2D res = lhs;
    res *= a;
    return res;
}

Rdec2D& operator /= (Rdec2D& lhs, double a) {
    lhs.x /= a;
    lhs.y /= a;
    return lhs;
}

Rdec2D operator / (const Rdec2D& lhs, double a) {
    Rdec2D res = lhs;
    res /= a;
    return res;
}

Rdec2D operator - (const Rdec2D& lhs) {
    Rdec2D res = lhs;
    res *= -1;
    return res;
}

bool operator== (const Rdec2D& lhs, const Rdec2D& rhs) {
    bool ans = (std::abs(lhs.x - rhs.x) < 0.0001) && (std::abs(lhs.y - rhs.y) < 0.0001);
    return ans;
}

bool operator!= (const Rdec2D& lhs, const Rdec2D& rhs) {
    bool ans = !(lhs == rhs);
    return ans;
}

double dot(Rdec2D lhs, Rdec2D rhs) {
    double ans = lhs.x * rhs.x + lhs.y * rhs.y;
    return ans;
}

double norm(Rdec2D v) {
    double ans = std::sqrt(v.x * v.x + v.y * v.y);
    return ans;
}

// Polar
struct Rpol2D {
    double r = 0.0;
    double phi = 0.0;
};

std::ostream& operator << (std::ostream& ostrm, const Rpol2D& v) {
    ostrm << '(' << v.r << ", " << v.phi << ')';
    return ostrm;
}

Rdec2D ToDec(Rpol2D v) {
    double x = v.r * cos(v.phi);
    double y = v.r * sin(v.phi);
    Rdec2D ans{x, y};
    return ans;
}

Rpol2D ToPol(Rdec2D v) {
    double r = norm(v);
    double phi = acos(v.x / r);
    Rpol2D ans{r, phi};
    return ans;
}

Rpol2D operator- (const Rpol2D& lhs) {
    Rpol2D res = lhs;
    res.phi += M_PI;
    return res;
}

Rpol2D operator *= (Rpol2D& lhs, double a) {
    lhs.r *= std::abs(a);
    if (a < 0) lhs = -lhs;
    return lhs;
}

Rpol2D operator * (const Rpol2D& lhs, double a) {
    Rpol2D res = lhs;
    res *= a;
    return res;
}

Rpol2D operator /= (Rpol2D& lhs, double a) {
    lhs.r /= a;
    return lhs;
}

Rpol2D operator / (const Rpol2D& lhs, double a) {
    Rpol2D res = lhs;
    res /= a;
    return res;
}

Rpol2D operator += (Rpol2D& lhs, const Rpol2D& rhs) {
    Rdec2D a = ToDec(lhs);
    Rdec2D b = ToDec(rhs);
    lhs = ToPol(a + b);
    return lhs;
}

Rpol2D operator + (const Rpol2D& lhs, const Rpol2D& rhs) {
    Rdec2D a = ToDec(lhs);
    Rdec2D b = ToDec(rhs);
    Rpol2D ans = ToPol(a + b);
    return ans;
}

Rpol2D operator -= (Rpol2D& lhs, const Rpol2D& rhs) {
    Rdec2D a = ToDec(lhs);
    Rdec2D b = ToDec(rhs);
    lhs = ToPol(a - b);
    return lhs;
}

Rpol2D operator - (const Rpol2D& lhs, const Rpol2D& rhs) {
    Rdec2D a = ToDec(lhs);
    Rdec2D b = ToDec(rhs);
    Rpol2D ans = ToPol(a - b);
    return ans;
}

bool operator== (const Rpol2D& lhs, const Rpol2D& rhs) {
    bool ans = (std::abs(lhs.r - rhs.r) < 0.0001) && (std::abs(lhs.phi - rhs.phi) < 0.0001);
    return ans;
}

bool operator!= (const Rpol2D& lhs, const Rpol2D& rhs) {
    bool ans = !(lhs == rhs);
    return ans;
}
