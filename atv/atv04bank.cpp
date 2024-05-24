//deposit, withdraw and show
#include <iostream>
float balance; //if i was using oop i wouldnt do this

float withdraw(float value);
float deposit(float value);
std::string show(float bal);

int main(){

    std::cout << "d for deposit, w for withdraw, b to show balance\n";
    char op;
    std::cin >> op;
    
    switch (op)
    {
    case d:
        /* code */
        break;
    
    default:
        break;
    }

    return 0;
}

float withdraw(float value){
    balance =- value;
}

float deposit(float value){
    balance =+ value;
}

std::string show(float bal){
    return "your balance is " + bal;
}
