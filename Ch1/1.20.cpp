#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item book;
    while(std::cin >> book)
        std::cout << book;
    return 0;
}