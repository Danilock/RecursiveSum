#include <iostream>

#include "../Headers/Math.h"

int number;

void Input()
{
    std::cout << "Insert a number higher than zero:";
    std::cin >> number;

    if(number <= 0)
    {
        std::cout << std::endl << "ERROR: Please insert a valid number.";
        Input();
        return;
    }

    Math math;
    math.RecursiveSum(number);

    std::cout << "The total sum is:" << math.Sum;
}

int main(int argc, char* argv[])
{
    Input();
    
    return 0;
}
