#include <iostream>
//Function to calculate the sum of digits of a number
int digitSum(int number)
{
    int sum = 0;
    //Repeat while number is not zero
    while (number != 0)
    {
        //aad the last digit
        sum += number % 10;
        //remove the last digit
        number /= 10;
    }
    return sum;
}
//Function to check if the sum of digits is even
bool isDigitSumEven(int number)
{
    int sum = digitSum(number);
    //if sum divisible by 2, it's even
    return (sum % 2 == 0);
}
int main()
{
    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;

    //Check and print result
    if(isDigitSumEven(n))
    {
        std::cout << "The sum of digits is even." << '\n';
    } else {
        std::cout << "The sum of digit is odd." << '\n';
    }
    return 0;
}