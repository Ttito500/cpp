#include <iostream>

int main(){

    std::string pessoas[] = {"tiago", "ana", "lucas", "joao", "maria", "manuel"};

    for (std::string pessoa : pessoas)
    {
        std::cout << "Olá, " << pessoa << '\n';
    }
    

    return 0;
}