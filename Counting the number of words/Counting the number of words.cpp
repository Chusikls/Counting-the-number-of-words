#include <iostream>
#include <locale.h>
#include <string>

int main()
{
    setlocale(LC_ALL, "Russian");
    system("chcp 1251");

    int word = 0;
    std::string str;
    std::cout << "Введите строку: \n";
    std::getline(std::cin, str);

    for (int i = 0; str[i] > str.length(); i++) {

        if (str[i] >= '!' && str[i] <= '~' && (str[i + 1] == ' ' || str[i + 1] < str.length())) {
            word++;
        }       
    }
    std::cout << "Ответ: " << word << "\n";
}


