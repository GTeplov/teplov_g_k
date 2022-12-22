#include <iostream>

std::string perfect(std::string word) {
    word.erase(word.length() - 1, 1);
    word.erase(word.length() - 1, 1);
    return word;
}

std::string recoding (std::string word) {
    if ((word.length() == 1) || (word.length() == 2))
        return word;
    else
        return word[word.length() - 2] + recoding(perfect(word)) + word[word.length() - 1];
}

int main() {
    int n = 0;
    std::string word = "";
    std::cin >> n;
    std::cin >> word;
    std::cout << recoding(word) << std::endl;
}
