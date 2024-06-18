#include <iostream>

class Animal{
    protected:
        std::string name;
    public:
        void eat(){
            std::cout << name << " is eating!\n";
        }
        void sleep(){
            std::cout << name << " is eepy\n";
        }

        std::string getName(){
            return name;
        }
};

class Dog : public Animal{
    public:
        Dog(std::string name){
            this->name = name;
        }

        void bark(){
            std::cout << name << " says woof woof!\n";
        }
};

class Cat : public Animal{
    public: 
        Cat(std::string name){
            this->name = name;
        }

        void meow(){
            std::cout << name << " says meow meow\n";
        }
};

int main(){
    Dog doggy = Dog("cachorro");
    doggy.bark();
    std::cout << doggy.getName() << '\n';

    Cat pussy = Cat("gata");
    pussy.meow();
    std::cout << pussy.getName() << '\n';

    return 0;
}