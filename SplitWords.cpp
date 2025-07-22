#include <iostream>
#include <string>
#include <sstream> //for istringstream

//Function to get sentence from user
std::string getInput(std::string message)
{
    std::string input;
    std::cout << message;
    //Get full input including spaces    
    std::getline(std::cin, input); 
    return input;
}
//Function to split and print words
void printWords(std::string sentence)
{
    //turn sentence into stream
    std::istringstream stream(sentence);
    std::string word;

    std::cout << "Words in the sentence:\n";
    while (stream >> word) 
    {
        //print each word on a new line 
        std::cout << word << '\n';
    }   
}
int main() 
{
    std::string sentence = getInput("Enter a sentence: ");
    printWords(sentence);
    return 0;
}

