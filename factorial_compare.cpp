#include <iostream>
// Function to calculate factorial using a loop
long long factorial_iterative(int n)
{
   long long result = 1;
   for(int i = 1; i <= n;i++)
   {
    // multiply result by current number
    result *= i;
   }
   // return final result
   return result;
}
// Function to calculate factorial using recursion
long long factorial_recursive(int n)
{
    // base case: factorial of 0 or 1 is 1
    if(n <= 1) return 1;
    else 
    {
        // recursive call
        return n * factorial_recursive(n-1);
    }
}
int main()
{
    int Num;
    // Ask the user to enter a number
    std::cout << "Please enter a non-negative number: ";
    std::cin >> Num;
    // Check if the number is negative
    if(Num < 0)
    {
        std::cout << "Negative numbers do not have a factorial!" << '\n';
        // exit the program with error
        return 1;
    }
    // Call the loop function
    long long result_loop = factorial_iterative(Num);
    // Call the recursive function
    long long result_recursion = factorial_recursive(Num);

    // Print both results
    std::cout << "\nFactorial using loop: " << result_loop << '\n';
    std::cout << "Factorial using recursion: " << result_recursion << '\n';

    return 0;
}
