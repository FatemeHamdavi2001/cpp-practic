#include <iostream>
#include <string>

//Function to get input from user
std::string getInput(std::string message)
{
    std::string input;
    std::cout << message;
    //Get full input including spaces    
    std::getline(std::cin, input); 
    return input;
}
//Function to check if word exists in sentence
bool isWordFound(std::string sentence, std::string word)
{
    size_t pos = sentence.find(word);
    //True if word is found
    return (pos != std::string::npos);
}
//Function to print result
void printResult(bool found, std::string word)
{
    if (found) 
    {
        std::cout << "Word \"" << word << "\" found in the sentence.\n";
    }
    else
    {
        std::cout << "Word \"" << word << "\" not found.\n";
    }
}
int main() 
{
    //Get sentence from user
    std::string sentence = getInput("Enter a sentence: ");

    //Get word to search
    std::string word = getInput("Enter the word to find: ");

    //Check if word exists
    bool found = isWordFound(sentence, word);

    //Print the result
    printResult(found, word);

    return 0;
}