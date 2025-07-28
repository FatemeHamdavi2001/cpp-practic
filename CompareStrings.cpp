#include <iostream>
#include <string>

//Function to get input from user
void getInput(std::string& str1, std::string& str2)
{
    std::cout << "Enter first string: ";
    std::getline(std::cin, str1);

    std::cout << "Enter second string: ";
    std::getline(std::cin, str2);
}
//Function to compare strings using == and compare()
void compareStrings(const std::string& str1, const std::string& str2)
{
    //Compare using ==
    if(str1 == str2)
       std::cout << "Using '==': The strings are equal.\n";
    else
       std::cout << "Using '==': The strings are NOT equal.\n";

    //Compare using compare()
    if (str1.compare(str2) == 0)
        std::cout << "Using 'compare()': The strings are equal.\n";
    else
        std::cout << "Using 'compare()': The strings are NOT equal.\n";
}
int main()
{
    std::string str1, str2;

    //Get input
    getInput(str1, str2);

    //Compare strings
    compareStrings(str1, str2);

    return 0;
}