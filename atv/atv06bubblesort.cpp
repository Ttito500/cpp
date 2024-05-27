#include <iostream>

void swap(int *a, int *b);
void sort(int array[], int size);

int main(){

    int array[] = {10, 5, 8, 6, 7, 3, 2, 4, 1, 9};
    int size = sizeof(array) / sizeof(int);

    for (int num : array)
    {
        std::cout << num << ' ';
    }
    std::cout << '\n';   

    sort(array, size);

    for (int num : array)
    {
        std::cout << num << ' ';
    }
    std::cout << '\n';

    return 0;
}

void swap(int *a, int *b){
    int buffer = *a;
    *a = *b;
    *b = buffer;
}

void sort(int array[], int size){
      for (size_t j = 0; j < size; j++)
    {
        for (size_t i = j; i < size; i++)
        {
            if (array[j] > array[i])
            {
                swap(&array[j], &array[i]);
            }
            
        }
        
    }
}

