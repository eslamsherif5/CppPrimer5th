[TOC]

## Chapter 1

### Exercises Section 1.2

#### 1.6

 **Q**: Explain whether the following program fragment is legal.

```c++
std::cout << "The sum of " << v1;
		  << " and " << v2;
		  << " is " << v1 + v2 << std::endl;
```

If the program is legal, what does it do? If the program is not legal, why not? How
would you fix it?

**Answer**

This fragment of code is illegal.

The output operator (`<<`) requires two operands, each of which one its two sides. Here, we haven't given it the lift-hand operand, namely, the `ostream` object.

To fix it, we simply need to provide an `ostream` object as the left-hand operand.

```c++
std::cout << "The product of " << v1;
std::cout << " by " << v2;
std::cout << " is " << v1 * v2 << std::endl;
```

----

### Exercises Section 1.3

---

### Exercises Section 1.4.1

#### 1.9

**Q**: Write a program that uses a `while` to sum the numbers from 50 to 100.

**Answer**

```c++
#include <iostream>

int main()
{
    int sum = 0, val = 50;
    while (val <= 100)
    {
        sum += val;
        val++;
    }
    std::cout << "Sum = " << sum << std::endl;
    return 0;
}
```

Output:

```
Sum = 3825
```

#### 1.10

**Q**: In addition to the `++` operator that adds `1` to its operand, there is a decrement operator (`--`) that subtracts `1`. Use the decrement operator to write a `while` that prints the numbers from ten down to zero.

**Answer**

```c++
#include <iostream>

int main()
{
    int n = 10;
    while (n >= 0)
    {    
        std::cout << n << std::endl;
        n--;
    }
    return 0;
}
```
Output:
```
10
9
8
7
6
5
4
3
2
1
0
```

#### 1.11

**Q**: Write a program that prompts the user for two integers. Print each number in the range specified by those two integers.

**Answer**

```c++
#include <iostream>

int main()
{
    std::cout << "Enter two integer range limit values" << std::endl;
    int a = 0, b = 0; // range limit values
    std::cin >> a >> b; // reading from user
    std::cout << "------------" << std::endl;

    int max = 0, min = 0; // to carry the bigger and smaller values respectively
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
```
Output:
```
Enter two integer range limit values
0
5
------------
0
1
2
3
4
5
```

---

### Exercises Section 1.4.2

#### 1.12

**Q**: What does the following for loop do? What is the final value of `sum`?

```C++
int sum = 0;
for (int i = -100; i <= 100; ++i)
sum += i;
```

**Answer**

It adds values from -100 to 100.

The final value of `sum` is `0`

#### 1.13

**Q**: Rewrite the first two exercises from § 1.4.1 (p. 13) using for loops.

1.13.1

**Answer**

```C++
#include <iostream>

int main()
{
    int sum = 0;
    for (int val = 50; val <= 100; val++)
    {
        sum += val;
    }
    std::cout << "Sum = " << sum << std::endl;
    return 0;
}
```
Output:
```
Sum = 3825
```
1.13.2

**Answer**

```C++
#include <iostream>

int main()
{
    for (int n = 10; n >= 0; n--)
    {    
        std::cout << n << std::endl;
    }
    return 0;
}
```
Output:
```
10
9
8
7
6
5
4
3
2
1
0
```
#### 1.14

**Q**: Compare and contrast the loops that used a `for` with those using a `while`. Are there advantages or disadvantages to using either form?

**Answer**

1. In a `for` loop, the counter variable is local and cannot be used outside of the `for` loop body. But in `while` loops, the counter variable usage isn't limited to the loop body and can be used outside of it. This can be seen as an advantage or a disadvantage depending on the application.

2. A `for` loop is used for a known number of iterations, whereas a `while` loop is run for any number of iterations as long as the condition evaluates to `true`.

#### 1.15

**Q**: Write programs that contain the common errors discussed in the box on page 16. Familiarize yourself with the messages the compiler generates.

1. **Answer**

```C++
// error: missing ) in parameter list for main
int main ( {
    // error: used colon, not a semicolon, after endl
    std::cout << "Read each file." << std::endl:
    // error: missing quotes around string literal
    std::cout << Update master. << std::endl;
    // error: second output operator is missing
    std::cout << "Write new master." std::endl;
    // error: missing ; on return statement
	return 0
}
```
2. **Answer**

```C++
#include <iostream>
int main()
{
    int v1 = 0, v2 = 0;
    std::cin >> v >> v2;
     // error: uses " v" not "v1"
    // error: cout not defined; should be std::cout
    cout << v1 + v2 << std::endl;
    return 0;
}
```
---

### Exercises Section 1.4.3

#### 1.16

**Q**: Write your own version of a program that prints the sum of a set of integers read from `cin`.

**Answer**

```C++
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
```

Output:

```
Add numbers and see the sum as you go, enter 0 to exit
1
Sum = 1
2
Sum = 3
5
Sum = 8
19
Sum = 27
30
Sum = 57
0
Final Sum = 57
```

---

### Exercises Section 1.4.4

#### 1.17

**Q**: What happens in the program presented in this section if the input values are all equal?
	 What if there are no duplicated values?

**Answer**

1. The program will continue asking for inputs forever. It will never print anything unless the input changes to get into the `else` statement which contains the printing statement.
2. It will print that every value occurs once.

#### 1.18

**Q**: Compile and run the program from this section giving it only equal values as input.
	 Run it again giving it values in which no number is repeated.

**Answer**
   Code:

   ```C++
#include <iostream>

int main()
{
    // currVal is the number we’re counting; we’ll read new values into val
    int currVal = 0, val = 0;
    // read first number and ensure that we have data to process
    if (std::cin >> currVal)
    {
        int cnt = 1; // store the count for the current value we’re processing
        while (std::cin >> val) { // read the remaining numbers
            if (val == currVal)
                // if the values are the same
                ++cnt;
                // add 1 to cnt
            else { // otherwise, print the count for the previous value
                std::cout << currVal << " occurs " << cnt << " times" << std::endl;
                currVal = val;
                // remember the new value
                cnt = 1;
                // reset the counter
            }
        } // while loop ends here
        // remember to print the count for the last value in the file
        std::cout << currVal << " occurs " << cnt << " times" << std::endl;
    } // outermost if statement ends here
    return 0;
}
   ```
1. Only equal values

   Input:

   ```
   1 1 1 1 1 1 1 1 1
   ```
   Output:

   ```
   <No output>
   ```

2. Only unique values

   Input:

   ```
   1 2 3 4 5 6
   ```
   Output:

   ```
   1 occurs 1 times
   2 occurs 1 times
   3 occurs 1 times
   4 occurs 1 times
   5 occurs 1 times
   ```

#### 1.19

**Q**: Revise the program you wrote for the exercises in § 1.4.1 (p. 13) that printed a range of numbers so that it handles input in which the first number is smaller than the second.

**Answer**

```c++
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
```

Output:

```
Enter two integer range limit values
1 5
------------
1
2
3
4
5
```

---

### Exercises Section 1.4.5

