#include <iostream>

bool isLuhn(const std::string& num);

int main() {
    std::string carnum;
    std::cout << "Insert your credit card number:\n";
    std::cin >> carnum;

    if (!isLuhn(carnum)) {
        std::cout << "Number incorrect\n";
    } else {
        std::cout << "Thanks\n";
    }

    return 0;
}

bool isLuhn(const std::string& num) {
    int n = num.size();
    int doublesum = 0;
    int oddsum = 0;

    for (int i = n - 1; i >= 0; i--) {
        int digit = num[i] - '0';

        if ((n - i) % 2 == 0) {
            digit *= 2;
            if (digit > 9) {
                digit -= 9;
            }
            doublesum += digit;
        } else {
            oddsum += digit;
        }
    }

    int total = doublesum + oddsum;

    return (total % 10 == 0);
}
