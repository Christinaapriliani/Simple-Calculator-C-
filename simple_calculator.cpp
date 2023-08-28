#include <iostream>

class Calculator {
public:
    int add(int x, int y) {
        return x + y;
    }

    int subtract(int x, int y) {
        return x - y;
    }

    int multiply(int x, int y) {
        return x * y;
    }

    int divide(int x, int y) {
        if (y != 0) {
            return x / y;
        } else {
            std::cout << "Error: Division by zero." << std::endl;
            return 0;
        }
    }
};

int main() {
    Calculator calculator;

    int num1, num2;
    char operation;

    std::cout << "Enter the first number: ";
    std::cin >> num1;

    std::cout << "Enter the operator (+, -, *, /): ";
    std::cin >> operation;

    std::cout << "Enter the second number: ";
    std::cin >> num2;

    int result;
    switch (operation) {
        case '+':
            result = calculator.add(num1, num2);
            break;
        case '-':
            result = calculator.subtract(num1, num2);
            break;
        case '*':
            result = calculator.multiply(num1, num2);
            break;
        case '/':
            result = calculator.divide(num1, num2);
            break;
        default:
            std::cout << "Invalid operator." << std::endl;
            return 1;
    }

    std::cout << "Result: " << result << std::endl;

    return 0;
}
