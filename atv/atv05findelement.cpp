#include <iostream>

int findelement(int array[], int size, int element);

int main(){
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(array)/sizeof(array[0]);
    int element = 5;
    int index = findelement(array, size, element);
    if(index != -1){
        std::cout << "Element found at index " << index << '\n';
    }else{
        std::cout << "Element not found" << std::endl;
    }
    return 0;
}

int findelement(int array[], int size, int element){
    for(int i = 0; i < size; i++){
        if(array[i] == element){
            return i;
        }
    }
    return -1;
}