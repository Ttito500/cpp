#include <iostream>

int main(){

    std::string mycars[5];

    for (size_t i = 0; i < 5; i++)
    {
        std::cout << "input a car or 'q' to quit:\n";
        std::string temp;
        std::getline(std::cin, temp);

        if (temp == "q")
        {
            break;
        } else
        {
            mycars[i] = temp;
        }
    }

    std::cout << "these are ur cars: \n";

    for (size_t i = 0; !mycars[i].empty(); i++)
    {
        std::cout << mycars[i] << ' ';
    }
    
    

    return 0;
}