#include <iostream>
#include <string>

//Function to get email input from user
std::string getInput(std::string message) 
{
    std::string input;
    std::cout << message;
    std::getline(std::cin, input);
    return input;
}

//Function to check if an email is valid
bool isValidEmail(const std::string& email) 
{
    //Find the position of '@'
    size_t atPos = email.find('@');

    //If '@' not found or is at the start or end, invalid
    if (atPos == std::string::npos || atPos == 0 || atPos == email.length() - 1)
        return false;

    //Check if there's another '@' after the first one
    if (email.find('@', atPos + 1) != std::string::npos) 
        return false; // More than one '@'

    //Check for '.' after '@'
    size_t dotPos = email.find('.', atPos + 1);

    //If '.' not found after '@', invalid
    if (dotPos == std::string::npos || dotPos == email.length() - 1)
        return false;

    return true;
}
int main() 
{
    std::string email;

    //Get email from user
    std::cout << "Enter an email address: ";
    std::getline(std::cin, email);

    //Check and print result
    if (isValidEmail(email))
        std::cout << "Valid email format.\n";
    else
        std::cout << "Invalid email format.\n";

    return 0;
}