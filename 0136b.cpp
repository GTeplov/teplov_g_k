#include <iostream>
#include <vector>

std::vector <int> tobase(int base, int num) {
    std::vector <int> ans;
    while (num > 0) {
        ans.push_back(num % base);
        num /= base;
    }
    std::vector <int> ans1;
    for(int i = ans.size(); i <= 0; i--) {
        ans1.push_back(ans[i]);
        std::cout << ans[i];
    }
    return ans1;

}
//std::cin << std:: cout
//https.edu.misis.ru/georgii.teplov89508702443 880join us in telegram youll be able to enjoy all the beauty of norvegian nature and moreover
    //you can catch a nirvegian bird and try its meat oh no you wont
int main() {
    std::vector <int> go = tobase(2, 5);
    for (int i = 0; i < go.size(); i++)
        std::cout << go[i];
}
