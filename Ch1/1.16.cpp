#include <iostream>

int main()
{
    std::cout << "Add numbers and see the sum as you go, enter 0 to exit" << std::endl;
    long sum = 0, val = 0;
    while (1)
    {
        std::cin >> val;
        if (0 == val)
            break;
        else
        {
            sum += val;
        }
        std::cout << "Sum = " << sum << std::endl;
    }
    std::cout << "Final Sum = " << sum << std::endl;
    return 0;
}