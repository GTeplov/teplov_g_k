#include <iostream>
#include <vector>

int main () {
    int slovo = 0;
    int a = 0;
    int stroka = 0;
    int stolbez = 0;
    int vsego = 0;
    int i = 0;
    while (a < 25) {
        std::cin >> slovo;
        a += 1;
        if (slovo == 1) {
            vsego = a;
        }
    }
    if (vsego % 5 == 0) {
        stroka = vsego / 5;
        stolbez = 5;
    } else {
        stroka = vsego / 5 + 1;
        stolbez = vsego % 5;
    stroka = vsego / 5 + 1;
    stolbez = vsego % 5;
    }
    i = abs(stroka - 3) + abs(stolbez - 3);
std::cout << i;
}
