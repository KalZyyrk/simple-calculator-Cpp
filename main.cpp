#include <iostream>

int main() {

    char op;
    double num1;
    double num2;
    double result;
    bool valid = false;


    while (!valid) {
        std::cout << "Your Calculator !\nEnter your Operation -> ";
        std::cin >> num1 >> op >> num2;

        switch (op) {
            case '+':
                result = num1 + num2;
                valid = true;
                break;
            case '-':
                result = num1 - num2;
                valid = true;
                break;
            case '*':
                result = num1 * num2;
                valid = true;
                break;
            case '/':
                result = num1 / num2;
                valid = true;
                break;
            default:
                std::cout << "Invalid Operator\nValid operator are + - * / \n";
        }
    }

    std::cout << "the result: " << result;
    return 0;
}
