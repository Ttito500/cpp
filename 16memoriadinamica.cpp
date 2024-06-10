#include <iostream>

int main(){
    int *pNum = NULL;
    int size;

    std::cout << "quantas notas?\n";
    std::cin >> size;

    pNum = new int[size];

    for (size_t i = 0; i < size; i++)
    {
        std::cout << "nota " << i + 1 <<": ";
        std::cin >> pNum[i]; 
    }

    for (size_t i = 0; i < size; i++)
    {
        std::cout << pNum[i] << ", ";
    }

    delete[] pNum;

    return 0;
}