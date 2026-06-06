#include <iostream>
#include <string> 
#include <string_view>

int calculate(int a, int b, char ch) 
{
    switch (ch)
    {
    case '+':
        return a+b;
        break;
    case '-':
        return a-b;
        break;
    case '*':
        return a*b;
        break;
    case '/':
        return a/b;
        break;
    case '%':
        return a%b;
        break;

    default:
        std::cout << "calculate(): Unhandled case\n";
        return 0;
    }
}

int main() 
{
    std::cout << "Enter an integer: ";
    int x{};
    std::cin >> x;

    std::cout << "Enter another integer: ";
    int y{};
    std::cin >> y;

    std::cout << "Enter a mathematical operator: ";
    char ch{};
    std::cin >> ch;

    int result{ calculate(x, y, ch) };
    std::cout << x << " " << ch << " " << y << " is " << result << '\n';

    return 0;
}