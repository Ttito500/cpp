//deposit, withdraw and show
#include <iostream>
float balance; //if i was using oop i wouldnt do this

void withdraw(float value);
void deposit(float value);

int main(){
    do
    {
        std::cout << "d for deposit, w for withdraw, b to show balance\n";
        char op;
        std::cin >> op;

        float val;
        switch (op)
        {
        case 'd':
            val = 0;
            std::cout << "how much will u deposit?\n";
            std::cin >> val;
            deposit(val);
            break;
        case 'w':
            val = 0;
            std::cout << "how much will u withdraw?\n";
            std::cin >> val;
            withdraw(val);
            break;
        case 'b':
            std::cout << "You have " << balance << " in ur balance!\n";
            break;
        default:
            std::cout << "please, enter a valid input\n";
            break;
        }
    } while (balance >= 0);

    return 0;
}

void withdraw(float value){
    balance =- value;
}

void deposit(float value){
    balance =+ value;
}

