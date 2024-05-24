//functions with same name, but different parameter list(different number of args or different types)

#include <iostream>
#include <vector>
const double PI = 3.141592653589793;

double area(double b, double h); //rectangle
double area(double radius); //circle
double area(double b, double h, char shape); //triangle

int main(){
    std::cout << area(5, 5) << " 5x5 rectangle\n";
    std::cout << area(2) << " circle of radius 2\n";
    std::cout << area(5, 5, 't') << " area of a b=5 h=5 triangle\n";

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
