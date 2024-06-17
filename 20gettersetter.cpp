#include <iostream>

class student{
    private:
        std::string name;
        float score;
        int id;
    public:
        student(std::string name, float score, int id){
            this->name = name;
            this->score = score;
            this->id = id;
        }

        student(){ // defalt constructor
            name = "";
            id = 0;
            score = 0.0;
        }

        std::string getName(){
            return name;
        }

        float getScore(){
            return score;
        }

        int getId(){
            return id;
        }

        void setName(std::string newName){
            name = newName;
        }
};

float studentsAverage(student *students, int size);

int main(){
    
    student *students = NULL;
    int size;

    std::cout << "quantos alunos?\n";   
    std::cin >> size;

    students = new student[size]; 

    for (size_t i = 0; i < size; i++)
    {
        std::string name;
        float score;

        std::cout << "What is the name of the student?\n";
        std::cin.ignore();
        getline(std::cin, name);
        
        std::cout << "What was his score?\n";
        std::cin >> score;

        students[i] = student(name, score, i);
    }

    std::cout << studentsAverage(students, size) << '\n';

    return 0;
}

float studentsAverage(student *students, int size){
    float sum = 0;

    for (size_t i = 0; i < size; i++)
    {
        sum += students[i].getScore();
    }

    return sum / size;
}
