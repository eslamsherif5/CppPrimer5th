 #include <iostream>

 int main()
 {
    int *ip, i, &r = i;
    std::cout << ip << std::endl << *ip << std::endl
              <<  i << std::endl
              <<  r << std::endl;

    int ii, *iip = nullptr;
    std::cout
             <<  ii << std::endl
             << iip << std::endl << *ip << std::endl;
    return 0;
    
 }