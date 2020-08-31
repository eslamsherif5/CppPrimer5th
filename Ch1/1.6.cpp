#include <iostream>
int main()
{
std::cout << "Enter two numbers:" << std::endl;
int v1 = 0, v2 = 0;
std::cin >> v1 >> v2;

/* 
 * This fragment of code is illegal.
 * The output operator (<<) requires two operands,
 * each of which one its two sides.
 * Here, we haven't given it the lift-hand operand, namely,
 * the ostream object
 */

// ###### ERRONEOUS CODE ######
/* 
    std::cout << "The product of " << v1;
          << " by " << v2;
          << " is " << v1 * v2 << std::endl;
*/
// ###### ERRONEOUS CODE ######

// ###### CORRRRRRRRECTED CODE ######
std::cout << "The product of " << v1;
std::cout << " by " << v2;
std::cout << " is " << v1 * v2 << std::endl;
// ###### CORRRRRRRRECTED CODE ######

return 0;
}