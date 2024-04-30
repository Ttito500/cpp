//namespace : lugar onde podemos colocar variaveis que permite que 2 variaveis tenha msm nome

#include <iostream>

namespace humano{
        int h= 170;
    }

    namespace triangulo{
        double h = 1.7;
    }

int main(){
    char h = 'h';
    
    std::cout << h << '\n';
    std::cout << humano::h << '\n';
    std::cout << triangulo::h << '\n';
}