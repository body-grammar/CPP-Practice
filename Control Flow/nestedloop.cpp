#include <iostream>

int main()
{
    int n{};
    std::cout << "Enter the value of n: ";
    std::cin >> n;

    for(int i = n; i >= 1; i--) 
    {
        for(int j = 1; j <= i; j++)
        {
            std::cout << j;
        }

        std::cout << '\n';
    }

    return 0;
}