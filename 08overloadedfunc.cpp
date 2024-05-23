//functions with same name, but different parameter list(different number of args or different types)

#include <iostream>
#include <vector>
const double PI = 3.141592653589793;

double area(double b, double h); //rectangle
double area(double radius); //circle
double area(double b, double h, char shape); //triangle

int main(){

    double res;
    std::string input;
    do
    {
        std::cout << "Write b h, radius or b h shape\n";
        std::getline(std::cin, input);

       switch (input.length())
       {
       case 1:
        std::cout << "Circle area: " << area(std::stod(input)) << '\n';
        break;
       case 3:
        double b = std::stod(input.at(0));
        double h = std::stod(input.at(2));
        std::cout << "Rectangle area: " << area(b, h) << '\n';
        break;
       case 5:
        double b = std::stod(input.at(0));
        double h = std::stod(input.at(2));
        std::cout << "triangle area: " << area(b, h, 't') << '\n';
        break;
       default:
        std::cout << "invalid input";
        break;
       }
        
        
    } while (res > 0);
    
    return 0;
}

double area(double b, double h){
    return b * h;
}

double area(double radius){
    return PI * radius * radius;    
}

double area(double b, double h, char shape){
    return b * h / 2;
}
