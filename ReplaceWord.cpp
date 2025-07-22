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
//Function to replase word in sentence
std::string replaceWord(std::string sentence, std::string oldWord, std::string newWord)
{
    //Find old word
    size_t pos = sentence.find(oldWord);
    if(pos != std::string::npos)
    {
        //Replace the word using erase and insert
        sentence.erase(pos, oldWord.length());
        sentence.insert(pos, newWord);
    }
    return sentence;
}
//Function to print the result
void printResult(std::string newSentence)
{
    std::cout << "Updated sentence: " << newSentence << '\n';
}
int main()
{    
    std::string sentence = getInput("Enter a sentence: ");
    std::string oldWord = getInput("Enter the word to replace: ");
    std::string newWord = getInput("Enter the new word: ");

    std::string updated = replaceWord(sentence, oldWord, newWord);

    printResult(updated);

    return 0;
}
