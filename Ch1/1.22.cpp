#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item books;
    if(std::cin >> books)
    {    
        Sales_item newBook;
        while(std::cin >> newBook)
        {    
            if(books.isbn() == newBook.isbn())
            {
                books += newBook;
                std::cout << books << std::endl;
            }
            else
                std::cout << "Items must refer to the same ISBN"<< std::endl;
        }
        std::cout << books << std::endl;
    }
    else
    {
        std::cout << "No input!" << std::endl;
    }
    
    return 0;
}