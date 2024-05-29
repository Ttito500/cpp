//read only
//more secure in that funtion
//convey 

#include <iostream>

void show(const int& id, const std::string& name);

int main(){
    std::string name = "joão";
    int id = 0;

    show(id, name);

    return 0;
}

void show(const int& id, const std::string& name){
    std::cout << "Hello " << name << " your id is: " << id << '\n';

}