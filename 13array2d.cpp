// arrays 2d são arrays de arrays

#include <iostream>

int main(){

    int array[2][3] = {
        {1, 2, 3},
        {4, 5, 6},
    };

    for (size_t i = 0; i < 2; i++)
    {
        for (size_t j = 0; j < 3; j++)
        {
            std::cout << array[i][j] << ", ";
        }

        std::cout << std::endl;
    }
    

    return 0;
}