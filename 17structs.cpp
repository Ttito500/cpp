#include <iostream>

struct dog
{
    std::string breed;
    int age;
    bool alive;
};


int main(){
    dog customer1;

    std::cout << "Whats ur dog breed?\n";
    getline(std::cin, customer1.breed);

    std::cout << "Whats ur dog age?\n";
    std::cin >> customer1.age;

    std::cout << "Is it alive?\n";
    std::cin >> customer1.alive;

    std::cout << customer1.breed << ' ' << customer1.age << ' ' << customer1.alive << '\n';

    return 0;
}