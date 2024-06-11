#include <iostream>

int fibonacci(int n); //return the number in the position n of fibonacci sequence

int main(){

    int position;
    std::cout << "what position do u wanna know?\n";
    std::cin >> position;

    std::cout << fibonacci(position) << '\n';

    return 0;
}

int fibonacci(int n){
    if (n == 0)
    {
        return 0;
    } else if (n == 1)
    {
        return 1;
    }
    
    return fibonacci(n - 2) + fibonacci(n - 1);
}