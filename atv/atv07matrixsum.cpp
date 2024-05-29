//Declare two 2D arrays (matrices) of size 2x3.
//Initialize the matrices with some values.
//Create a third 2D array to store the result of the addition of the first two matrices.
//Print the resulting matrix.

#include <iostream>

int main(){
    int matrixA[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };
    
    int matrixB[2][3] = {
        {7, 8, 9},
        {10, 11, 12}
    };

    int sum[2][3];

    for (size_t i = 0; i < 2; i++)
    {
        for (size_t j = 0; j < 3; j++)
        {
            sum[i][j] = matrixA[i][j] + matrixB[i][j];
        }
        
    }
    
    for (size_t i = 0; i < 2; i++)
    {
        for (size_t j = 0; j < 3; j++)
        {
            std::cout << sum[i][j] << ", ";
        }
        std::cout << std::endl;        
    }
    return 0;
}