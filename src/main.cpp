#include <iostream>
#include <vector>

int main() {
    int numWords = 0;
    std::cin >> numWords;
    std::vector<std::string> words;

    for (int i = 0; i < numWords; i++) {
        std::string word;
        std::cin >> word;
        words.push_back(word);
    }

    for (auto& word : words) {
        if (word.length() < 11) {
            std::cout << word << std::endl;
        }
        else {
            std::cout << word[0] << (word.length() - 2) << word[word.length() -1] << std::endl;
        }
    }
    return 0;
}
