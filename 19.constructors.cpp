#include <iostream>

class dog{
    private:
        std::string name;
        std::string breed;
        int age;
    
    public:
        dog(std::string name, std::string breed, int age){
            this->name = name;
            this->breed = breed;
            this->age = age;
        }

        void show(){
            std::cout << name << ' ' << breed << ' ' << age << '\n';
        }
};

int main(){

    dog dog1("lilo", "pinscher", 5);
    dog1.show();

    return 0;
}