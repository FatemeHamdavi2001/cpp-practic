#include <iostream>
#include <string>

//Function to count vowels in the string
int countVowels(std::string str)
{
    int count = 0;
    //Go through each character
    for(size_t i = 0; i < str.length(); i++)
    {
        std::string vowels = "aeiouAEIOU";
        if (vowels.find(str[i]) != std::string::npos)
           {
                count++;
           }
     }

    return count++;
}
int main()
{
    std::string input;
    //Ask user to enter a string
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);

    //Count vowels and print result
    std::cout << "Number of vowels: " << countVowels(input) << '\n';
    
    return 0;
}