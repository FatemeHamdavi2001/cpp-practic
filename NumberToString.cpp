#include <iostream>
#include <string>

//Function to get a number from user
float getNumber()
{
    float num;
    std::cout << "Enter a number: ";
    std::cin >> num;
    return num;
}

//Function to convert number to string and print sentence
void convertToStringAndPrint(float number)
{
    //Convert float to string
    std::string numberStr = std::to_string(number);

    //Make a sentence using string concatenation
    std::string sentence = "You entered the number: " + numberStr;

    //Print the sentence
    std::cout << sentence << '\n';
}

int main()
{
    //Get number input
    float inputNumber = getNumber();

    //Convert to string and print
    convertToStringAndPrint(inputNumber);

    return 0;
}