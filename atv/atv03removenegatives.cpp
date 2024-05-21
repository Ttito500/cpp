#include <iostream>
#include <vector>

int main(){
    std::vector<int> numbers{1, 2, -3, 4, -5};
    
    std::vector<int> positive(numbers.size());
    for (int i = 0; i < 5; i++)
    {
        if (numbers[i] < 0)
        {
            continue;
        }
        
        positive[i] = numbers[i];
    }
    
    for (int n : positive)
    {
        std::cout << n << " ";
    }
    

    return 0;
}
/*
int main() {
    std::vector<int> numbers{1, 2, -3, 4, -5};
    
    std::vector<int> positive;
    for (int i = 0; i < numbers.size(); i++) {
        if (numbers[i] < 0) {
            continue;  // Skip negative numbers
        }
        
        positive.push_back(numbers[i]);  // Add positive numbers to the positive vector
    }
    
    for (int n : positive) {
        std::cout << n << " ";  // Print the positive numbers
    }
    
    return 0;
}
*/