#include <iostream>
#include <string>

std::string removeBracketsContent(const std::string& str) {
    std::string result;
    int depth = 0; 
    for (char ch : str) {
        if (ch == '<') {
            depth++;
        }
        else if (ch == '>') {
            if (depth > 0) depth--;
        }
        else if (depth == 0) {
            result += ch; 
        }
    }
    return result;
}

int main() {
    std::string str;
    std::cout << "Enter:" << std::endl;
    std::getline(std::cin, str);
    std::string result = removeBracketsContent(str);
    std::cout << "Results: " << result << std::endl;
    return 0;
}
