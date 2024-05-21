/*
.lenght()
.empty()
.clear()
.append()
.at(i) shows the caracther in the given position
.insert(i, x) puts x into given position
.find(x) finds first inntance of x
.erase(b, e) erase from b to e
*/

#include <iostream>

int main(){
    std::string name;
    std::cout << "say ur name ";
    std::getline(std::cin, name);
    
    if(name.empty()){
        std::cout << "u didn't " << '\n';
    } else{
        std::string ap = name.insert(0, "@");
        ap = ap.append("@gmail.com");
        std::cout << ap << " ur name is " << name.length() << " characters long " << '\n';
    }

    return 0;
}