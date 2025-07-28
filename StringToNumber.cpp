#include <iostream>
#include <string>

//Function to get a numeric string from the user
std::string getInput()
{
    std::string input;
    std::cout << "Enter a number (as string): ";
    std::getline(std::cin, input);
    return input;
}

//Function to convert string to int and float and perform operations
void convertAndOperate(const std::string& input)
{
    //Convert to integer using stoi
    int numberInt = std::stoi(input);
    std::cout << "As integer + 10: " << numberInt + 10 << '\n';

    //Convert to float using stof
    float numberFloat = std::stof(input);
    std::cout << "As float * 2: " << numberFloat * 2 << '\n';
}

int main()
{
    //Get input
    std::string numericStr = getInput();

    //Convert and operate
    convertAndOperate(numericStr);

    return 0;
}
