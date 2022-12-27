#include <iostream>
#include <vector>

int main () {
    int t = 0;
    int w = 0;
    std::cin >> t;
    for (int i = 0; i < t; i++) {
    std::cin >> w;
    std::vector <int> chisla;
    int a = 1;
    while (w > 0) {
        if (w % 10 > 0) {
            chisla.push_back((w % 10) * a);
        }
        w /= 10;
        a *= 10;
    }
    std::cout << chisla.size() << std::endl;
    for(int i = chisla.size()-1; i > -1; i--) {
        std::cout << chisla[i] << " ";
    }
    }
}
