#include <iostream>
#include <string>

//Function to count characters in a string
int getLength(std::string str)
{
    //To count the number of characters
    int count = 0;
    //Loop through each character in the string
    for(std::size_t i = 0; i < str.length(); i++)
    {
        //Increase counter for each character
        count++;
    }
    //Return the total count
    return count;
}
int main()
{
    std::string input;
    //Ask user to enter a string
    std::cout << "Enter a string: ";
    //Get full line including spaces
    std::getline(std::cin, input);

    //Call the function and print the result
    std::cout << "Length of the string: " << getLength(input) << '\n';

    return 0;
}