#include <iostream>

int main()
{
    std::cout << "Enter two integer range limit values" << std::endl;
    int a = 0, b = 0; // range limit values
    std::cin >> a >> b; // reading from user
    std::cout << "------------" << std::endl;

    if (a>b) 
    {
        int temp;
        temp = b;
        b = a;
        a = temp;
    }
    while (a <= b) // as long as min is below or equal to max
    {    
        std::cout << a << std::endl;
        a++;
    }
    return 0;
}