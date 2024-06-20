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
    private:
        std::string name;
    public:
        std::string show(){
            
        }
};

int main(){

    return 0;
}