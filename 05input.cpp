#include <iostream>

// >> (extraction op)   << (insertion op)

int main(){
/*
    std::string nome;

    std::cout << "What's ur name?" << '\n';
    std::cin >> nome;
    std::cout << nome << '\n';
*/
    // para toda linha:

    std::string fullname;
    std::cout << "What's ur name?" << '\n';
    std::getline(std::cin >> std::ws, fullname); //ws limpa os newline e espaços brancos
    std::cout << "Teu nome é " << fullname;

    return 0;
}