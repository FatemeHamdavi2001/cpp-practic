#include <iostream>
#include <string>

//Function to get a full line input from user
std::string getLineInput(std::string message)
{
    std::string input;
    std::cout << message;
    std::getline(std::cin, input);

    return input;
}
//Function to return first 10 characters or full sentence if shorter
std::string shortenSentence(std::string sentence)
{
    if (sentence.length() >= 10)
        //Take first 10 characters
        return sentence.substr(0, 10);
    else
        //Return full sentence if shorter than 10
        return sentence;
    
}
int main() 
{
    //Get the sentence
    std::string sentence = getLineInput("Enter a sentence: ");

    //Get the shortened result
    std::string shortVersion = shortenSentence(sentence);

    //Print the result
    std::cout << "Shortened sentence: " << shortVersion << '\n';

    return 0;
}