#include <iostream>
#include <string>

//Function to get sentence from user
std::string getInput(std::string message)
{
    std::string input;
    std::cout << message;
    //Read full sentence from user
    std::getline(std::cin, input); 
    return input;
}
//Function to remove all spaces from a string
std::string removeSpaces(std::string str) {
    //To store final string without spaces
    std::string result = "";
    //Loop through each character in the string
    for (size_t i = 0; i < str.length(); i++)
    {
        if (str[i] != ' ')
        {
            //Add only non-space characters
            result += str[i];
        }
    }
    //Return the final compressed string
    return result;
}
int main()
{
    //Get input from user
    std::string input = getInput("Enter a string: ");              
    //Remove all spaces
    std::string noSpaces = removeSpaces(input);
    std::cout << "String without spaces: " << noSpaces << '\n';

    return 0;
}
