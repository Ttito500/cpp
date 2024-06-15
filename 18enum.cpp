//user dfined data type, good for readability

#include <iostream>

enum light {RED, GREEN, YELLOW};

int main() {

    light trafic = GREEN;

    switch (trafic)
    {
    case RED:
        std::cout << "stop!\n";
        break;
    
    case GREEN:
        std::cout << "go\n";
        break;
    case YELLOW:
        std::cout << "slow down\n";
        break;
    }

    return 0;
}