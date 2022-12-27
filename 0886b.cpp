#include <iostream>
#include <vector>
#include <set>

int main() {
    int n = 0;
    std::cin >> n;
    std::vector <int> places;
    std::set <int> spisok;
    int a = 0;
    for (int i = 0; i < n; i++) {
        std::cin >> a;
        places.push_back(a);
    }
    int p = 0;
    for (int i = n - 1; i > -1; i--) {
        if (spisok.count(places[i]) == 0) {
            spisok.insert(places[i]);
            p = places[i];
        }
    }
    std::cout << p;
}
