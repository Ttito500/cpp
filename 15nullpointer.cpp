//nullptr are usefull to determine if the pointer was assigned

#include <iostream>

int main(){
    int* pointer = nullptr;

    if (pointer == nullptr)
    {
        std::cout << "pointer was not assigned\n";
    } else
    {
        std::cout << "pointer assigned" << *pointer << '\n';
    }
    
    return 0;
}
