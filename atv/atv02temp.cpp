#include <iostream>

int main(){
    char conv;
    std::cout << "quer transformar para qual medida? (c, f)" << '\n';
    std::cin >> conv;

    if (conv == 'c')
    {
        float f;
        std::cout << "qual a temperatura em fahrenheit?" << '\n';
        std::cin >> f;

        float c = (f - 32) / 1.8;
        std::cout << c;
        
    }
    else if (conv == 'f')
    {
        float c;
        std::cout << "qual a temperatura em celcius?" << '\n';
        std::cin >> c;

        float f = 1.8 * c + 32;
        std::cout << f;
    }
    
    return 0;
}