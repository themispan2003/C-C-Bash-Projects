#include <iostream>

int main(){

    char op;
    double num1, num2, res;

    std::cout << "\nCalculator\n\n";
    std::cout << "Give me the operation you want to make (+,-,x,/): ";
    std::cin >> op;

    std::cout << "\nGive me the first number: ";
    std::cin >> num1;

    std::cout << "\nGive me the second number: ";
    std::cin >> num2;

    switch(op){
        case '+':
            res = num1 + num2;
            std::cout << "Result is " << res << ".\n";
            break;
        case '-':
            res = num1 - num2;
            std::cout << "Result is " << res << ".\n";
            break;
        case 'x':
            res = num1 * num2;
            std::cout << "Result is " << res << ".\n";
            break;
        case '/':
            std::cout << "Result is " << num1 / num2 << ".\n";
            break;
        default:
            std::cout << "Illegal choice for operator!\nEnter +,-,x,/.\n";
            break;
    }

    return 0;
}