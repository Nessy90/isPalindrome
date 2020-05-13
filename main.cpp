#include <iostream>
#include <string>

bool isPalindrome(const std::string &text);

int main(){

    std::string text;
    getline(std::cin, text);

    if (isPalindrome(text))
        std::cout << text << " jest palindromem.\n";
    else
        std::cout << text << " nie jest palindromem.\n";

    return 0;
}

bool isPalindrome(const std::string &text)
{
    for (int i = 0; i < text.length()/2; i++)
    {
        if (text[i] != text[text.length()-i-1])
            return false;
    }
    return true;
}
