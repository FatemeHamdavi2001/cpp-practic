#include <iostream>
#include <string>

//Function to get full name from user
std::string getInput(std::string message)
{
    std::string name;
    std::cout << message;
    std::getline(std::cin, name);
    return name;
}
//Function to abbreviate the name using only string methods
std::string abbreviateName(std::string fullName)
{
    //Find the first and last space
    size_t firstSpace = fullName.find(' ');
    size_t lastSpace = fullName.rfind(' ');

    //If there is no space, return only the first letter
    if (firstSpace == std::string::npos)
    {
        std::string first = fullName.substr(0, 1);
        first[0] = toupper(first[0]);
        return first + ".";
    }

    //Extract initials as substrings
    std::string firstInitial = fullName.substr(0, 1);
    std::string lastInitial = fullName.substr(lastSpace + 1, 1);

    //Capitalize initials
    firstInitial[0] = toupper(firstInitial[0]);
    lastInitial[0] = toupper(lastInitial[0]);

    return firstInitial + ". " + lastInitial + ".";
}
int main()
{
    std::string fullName = getInput("Enter your full name: ");
    std::string abbreviation = abbreviateName(fullName);

    std::cout << "Abbreviated name: " << abbreviation << std::endl;

    return 0;
}
