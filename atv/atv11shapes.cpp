#include <iostream>
#include <cmath>

class Coordinates{
    private:
        double x;
        double y;
    public:
        Coordinates(double x, double y){
            this->x = x;
            this->y = y;
        }

        double getX(){
            return x;
        }

        double getY(){
            return y;
        }
        
        double distance(Coordinates p){
            sqrt(pow(x - p.getX(), 2) + pow(y - p.getY(), 2));
        }

};

class Shape{
    public:
        std::string name;
        virtual bool inside(Coordinates p) = 0; //determines if a point p is inside of the shape
        virtual double getArea() = 0; //returns the area of the shape
        virtual double getPerimeter() = 0; //returns the perimeter of the shape

        std::string show(){
            std::cout << "the area of the shape is: " << getArea() << " and its perimeter is: " << getPerimeter();
        }
};

class Circle : public Shape{
    public:
        Coordinates center;
        double radius;

        Circle(Coordinates center, double radius){
            this->center = center;
            this->radius = radius;
        }

        bool inside(Coordinates p) override{

        }

        

};

int main(){

    return 0;
}