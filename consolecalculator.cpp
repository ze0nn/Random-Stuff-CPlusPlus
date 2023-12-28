#include <iostream>

int main() {
    char op;
    double num1;
    double num2;
    double result;
    
    std::cout << "***************** CALCULATOR *****************\n";

    std::cout << "Enter one of the following: (+ - * /): ";
    std::cin >> op;

    std::cout << "\nEnter Number 1: \n";
    std::cin >> num1;

    std::cout << "Enter Number 2: \n";
    std::cin >> num2;

    std::cout <<"******************* RESULT *******************\n";

    switch(op) {
        case '+':
            result = num1 + num2;
            std::cout << "\n" << result << "\n";
            break;
        case '-':
            result = num1 - num2;
            std::cout << "\n" << result << "\n";
            break;
        case '*':
            result = num1 * num2;
            std::cout << "\n" << result << "\n";
            break;
        case '/':
            result = num1 / num2;
            std::cout << "\n" << result << "\n";
            break;
        default:
            std::cout << "An error occured. Please double check inputs, and try again.";
            break;
    }

    std::cout << "\n**********************************************";

    return 0;
}
