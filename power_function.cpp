#include <iostream>
// Function to calculate a raised to the power of b using loop
int power(int base, int exponent)
{
    int result = 1;
    //Multiply base by itself exponent times
    for(int i = 1; i <= exponent; i++)
    {
        result *= base;
    }
    return result;
}
int main()
{
    int a,b;
    //Get input from user
    std::cout << "Enter base number : ";
    std::cin >> a;
    std::cout << "Enter exponent : ";
    std::cin >> b;
    //Call the power function and Show result
    std::cout << a << " raised to the power of " << b << " is: " << power(a,b) << '\n';

    return 0;
}