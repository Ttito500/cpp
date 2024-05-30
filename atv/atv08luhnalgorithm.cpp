//double every second digit from right to left
//if the number is 2 digits after doubling, split them
//add it all up
//add all odd numbers from right to left in the original number
//sum these 2
//if this sum is divisible by 10, the number is valid

#include <iostream>

bool isLuhn(std::string num); //it accepts a string so we can divide into digits more easily

int main(){
    std::string carnum;
    std::cout << "insert ur credit card number:\n";
    std::cin >> carnum;
/*
    if (!isLuhn(std::to_string(carnum)))
    {
        std::cout << "number incorrect\n";
    } else
    {
        std::cout << "thanks\n";
    }
  */  

    isLuhn(carnum);
    return 0;
}

bool isLuhn(std::string num){
    int digits[16];

    int index = 0;
    for(char dig : num)
    {
        digits[index] = dig - '0';
        ++index;
    }

    

    return true;
}