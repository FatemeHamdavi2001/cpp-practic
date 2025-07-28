#include <iostream>
#include <string>

//Function to get two strings from the user
void getInput(std::string& first, std::string& second)
{
    std::cout << "Enter first string: ";
    std::getline(std::cin, first);

    std::cout << "Enter second string: ";
    std::getline(std::cin, second);
}

//Function to concatenate strings using + and append()
void concatenateStrings(const std::string& first, const std::string& second)
{
    // Concatenation using + operator
    std::string result1 = first + second;
    std::cout << "Using '+': " << result1 << '\n';

    // Concatenation using append() method
    std::string result2 = first;
    result2.append(second);
    std::cout << "Using 'append()': " << result2 << '\n';
}

int main()
{
    std::string str1, str2;

    //Get user input
    getInput(str1, str2);

    //Concatenate and print the result
    concatenateStrings(str1, str2);

    return 0;
}
