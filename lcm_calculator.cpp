#include <iostream>
//Function to find the greatest common divisor (GCD)
int gcd(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
    
}
//Function to find the least common multiple (LCM)
int lcm(int a, int b)
{
    //LCM formula
    return (a * b) / gcd(a,b);
}
int main()
{
    int num1, num2;
    //Get input from user
    std::cout << "Enter two number: ";
    std::cin >> num1 >> num2;

    //Call the LCM function and Show result
    std::cout << "LCM of " << num1 << " and " << num2 << " is: " << lcm(num1,num2) << '\n';

    return 0;
}