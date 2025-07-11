#include <iostream>
//Function to reverse a number
int reverseNumber(int num)
{
    int reversed = 0;
    //Loop to reverse digits
    while(num != 0)
    {
        //shift and add last digit
        reversed = reversed * 10 + (num % 10);
        //remove last digit
        num /= 10;
    }
    return reversed;
}
//Function to check if a number is a palindrome
bool isPalindrome(int num)
{
    //compare with its reverse
    return num == reverseNumber(num);
}
int main()
{
    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;
    //check if the number is a palindrome
    if(isPalindrome(n))
    {
        std::cout << n << " is a palindrome." << '\n';
    } else {
        std::cout << n << " is not a palindrome." << '\n';
    }
    return 0;
}