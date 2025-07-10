#include <iostream>
//Function to check if a number is prime
bool isPrime(int number)
{
     //numbers less than 2 are not prime
    if(number <= 1) return false; 

    //divisible by another number
    for(int i = 2; i * i <= number; i++)
    {
        if(number % i == 0) return false;
    }
    //it's prime
    return true;

}
int main()
{
    int n;
    //Ask user for input
    std::cout << "Enter a number: ";
    std::cin >> n;
    
    //Check if prime
    if(isPrime(n))
    {
        std::cout << n << " is a prime number." <<'\n';
    } else {
        std::cout << n << " is not a prime number." <<'\n';
    }
    return 0;
}