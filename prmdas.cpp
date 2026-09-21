#include<iostream>
#include<string>
#include<sstream>
#define print std::cout
#define get std::cin
int main()
{
    std::string da_ta;
    print << "two operator only! [pemdas calculator]\n";
    print << "had bug it cant take decimals!!\n";
    print << "\noperator![x][/][+][-]\n";
    print << "\nenter e.g. 4x5+6: ";
    get >> da_ta;

    std::stringstream ss(da_ta);
    long long result, num1, num2, num3;
    char op, op2;

    if (ss >> num1 >> op >> num2 >> op2 >> num3) {

        if (op == 'x') {
            result = num1 * num2;
            switch (op2) {
            case 'x':
                print << result * num3;
                break;
            case '/':
                print << result / num3;
                break;
            case '+':
                print << result + num3;
                break;
            case '-':
                print << result - num3;
                break;
            default:
                break;
            }
        }

        if (op == '/') {
            switch (op2) {
            case 'x':
                print << num1 / num2 * num3;
                break;
            case '/':
                print << num1 / num2 / num3;
                break;
            case '+':
                print << num1 / num2 + num3;
                break;
            case '-':
                print << num1 / num2 - num3;
                break;
            default:
                break;
            }
        }

        if (op == '+') {
            switch (op2) {
            case 'x':
                print << num1 + num2 * num3;
                break;
            case '/':
                print << num1 + num2 / num3;
                break;
            case '+':
                print << num1 + num2 + num3;
                break;
            case '-':
                print << num1 + num2 - num3;
                break;
            default:
                break;
            }
        }

        if (op == '-') {
            switch (op2) {
            case 'x':
                print << num1 - num2 * num3;
                break;
            case '/':
                print << num1 / num2 - num3;
                break;
            case '+':
                print << num1 - num2 + num3;
                break;
            case '-':
                print << num1 - num2 - num3;
                break;
            default:
                break;
            }
        }
    }
    return 0;
}
//working on update iladd few operator and fix the decimals issues 