#include <iostream>
#include <string>

//Function to get user input
std::string getEmail()
{
    std::string email;
    std::cout << "Enter your email address: ";
    std::getline(std::cin, email);
    return email;
}
//Function to extract domain part from email
std::string extractDomain(std::string email)
{
    //Find the position of '@'
    int atIndex = email.find('@');
    //If '@' not found, return error message
    if(atIndex == -1)
    {
        return "Invalid email: '@' not found.";
    }
    //Extract substring from after '@' to end
    std::string domain = email.substr(atIndex + 1);
    return domain;
}
int main()
{
    //Get input
    std::string email = getEmail();
    //Extract domain
    std::string domain = extractDomain(email);
    //Print the result
    std::cout << "Domain part: " << domain << '\n';

    return 0;
}