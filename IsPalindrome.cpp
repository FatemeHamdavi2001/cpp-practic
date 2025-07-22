#include <iostream>
#include <string>

//Function to check if a string is a palindrome
bool isPalindrome(std::string str)
{
    //Get the length of string
    int n = str.length();
    //Loop through the first half of the string
    for(int i = 0; i < n / 2; i++)
    {
        //Compare character from start with end
        if(str[i] != str[n - 1 - i])
        {
            //If not eqaul, it's not a palindrome
            return false;
        }
    }
    //All characters matched
    return true;
}
int main()
{
    std::string input;
    //Get the full string from user
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);

    //Call the function and print the result
    if(isPalindrome(input))
    {
        std::cout << "This is a Palindrome\n";
    }
    else
    {
        std::cout << "This is not a Palindrome\n";
    }

    return 0;
}