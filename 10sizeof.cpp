//sizeof() retorna o tamanho, em bytes, de um datatype etc
#include <iostream>

int main(){
    std::string carros[] = {"hilux", "camaro", "lamborghini", "crossfox"};
    std::cout << "Uma string ocupa " << sizeof(std::string) << "\ncarros ocupam " << sizeof(carros) << " em bytes\n";
    std::cout << "array carros tem " << sizeof(carros) / sizeof(std::string) << "elementos\n";
    return 0;
}