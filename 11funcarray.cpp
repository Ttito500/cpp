#include <iostream>

float media(int grades[], int size);

int main() {
    int grades[] = {10, 9, 8, 7, 6, 10};
    int size = sizeof(grades) / sizeof(int);
    std::cout << "sua media é " << media(grades, size) << '\n';

    return 0;
}

float media(int grades[], int size){
    float soma;
    for (size_t i = 0; i < size; i++)
    {
        soma += grades[i];
    }

    return soma / size;
}
