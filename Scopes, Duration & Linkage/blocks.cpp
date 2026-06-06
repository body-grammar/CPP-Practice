#include <iostream>

int main()
{
    int smaller, larger;

    std::cout << "Enter and integer: ";
    std::cin >> smaller;

    std::cout << "Enter a larger integer: ";
    std::cin >> larger;

    std::cout << "Swapping the values\n";

    if(smaller > larger) 
    {
        int temp;
        temp = smaller;
        smaller = larger;
        larger = temp;
    } 

    std::cout << "The smaller value is " << smaller << '\n';
    std::cout << "The larger value is " << larger << '\n';

    return 0;
}

/*
In the future, you can use std::swap() from the <utility> header to swap the values of two variables. For example

int temp{ larger };
larger = smaller;
smaller = temp;

is same as
std::swap(larger, smaller)
*/