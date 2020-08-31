#include <iostream>

int main()
{
    std::cout << "Enter two integer range limit values" << std::endl;
    int a = 0, b = 0; // range limit values
    std::cin >> a >> b; // reading from user
    std::cout << "------------" << std::endl;

    int max = 0, min = 0; // to carry the bigger and smaller values
    if (a>b) 
    {
        max = a; // if a is bigger, then pass its value to max
        min = b; // and pass b's value to min
    }
    else 
    {
        max = b; // otherwise, pass b's value to max
        min = a; //and pass a's value to min
    }
    while (min <= max) // as long as min is below or equal to max
    {    
        std::cout << min << std::endl;
        min++;
    }
    return 0;
}