#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item book1, book2;
    std::cin >> book1 >> book2;
    if(book1.isbn() == book2.isbn())
        std::cout << book1 + book2;
    else
        std::cout << "Items must refer to the same ISBN";
    return 0;
}