#include <iostream>
//Function to check if a number is prime
bool isPrime(int num)
{
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; i++)
    {
        if(num % i == 0) return false;
    }
    return true;
}
//Function to count prime numbers between two values
int countPrimes(int start, int end) 
{
    int count = 0;
    //Loop from start to end
    for(int i = start; i <= end; i++)
    {
        if(isPrime(i))
        {
            count++;
        }
    }
    return count;
}
int main()
{
    int a,b;
    std::cout << "Enter two numbers(start and end): ";
    std::cin >> a >> b;
    //Call function and Show result
    std::cout << "Number of prime numbers between " << a << " and " << b << " is: " << countPrimes(a,b) << '\n';

    return 0;
}