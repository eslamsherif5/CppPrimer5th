#include <iostream>

 int main()
 {
    // const int o = 5;
    int i;
    // i = o;

    int *p1, *const p2 = &i;
    const int *const p3 = &i;
   //  p2 = p1;
    return 0;
 }