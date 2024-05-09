//type conversion

#include <iostream>

int main(){
    //char x = 100;
    //std::cout << x << '\n'; //conversão inplicita de um numero a uma letra pela tabela acii

    //std::cout << (char )100; //conversão explicita

    int correct = 8;
    int total = 10;

    std::cout << correct / (double) total * 100 << "%";
    
    return 0;
}