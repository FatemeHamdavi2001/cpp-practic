#include <iostream>
#include <string>

//Function to reverse the string
std::string reverseString(std::string str)
{
    //Create empty string for result
    std::string reversed = "";
    //Go from end of string to beginning
    for (int i = str.length() - 1; i >= 0; i--)
    {
        //Add each character to result
        reversed += str[i];
    }
    //Return reversed string
    return reversed;
}
int main()
{
    std::string input;
    //Ask user to enter a string
    std::cout << "Enter a string: ";
    //Use getline to read full line
    std::getline(std::cin, input);
    //Call function to reverse and show result
    std::string result = reverseString(input);
    std::cout << "Reversed string: " << result << '\n';

    return 0;
}