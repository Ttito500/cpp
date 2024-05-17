#include <iostream>

int main(){

    int mes;
    std::cin >> mes;

    switch (mes)
    {
    case 1:
        std::cout << "janeiro";
        break;
    case 2:
        std::cout << "fevereiro";
        break;
    case 3:
        std::cout << "março";
        break;
    case 4:
        std::cout << "abril";
        break;
    case 5:
        std::cout << "maio";
        break;
    case 6:
        std::cout << "junho";
        break;
    default:
        std::cout << "n é mês";
        break;
    }

    return 0;
}