#include <iostream>

int main() {

    // declare all the variable needed
    char op;                // char op is for the operator, the operator will be a character like '+, -, *, /'
    double num1;            // double is to provided decimal if needed
    double num2;
    double result;
    bool valid = false;


    while (!valid) {
        std::cout << "Your Calculator !\nEnter your Operation -> ";
        // collect the input for the user
        std::cin >> num1 >> op >> num2;

        // switch that make the operation based on the operator write by the user
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
                // error Handler
                std::cout << "Invalid Operator\nValid operator are + - * / \n";
        }
    }

    // display the result
    std::cout << "the result: " << result;
    return 0;
}
