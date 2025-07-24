#include <iostream>
#include <string>

//Function to get user input
std::string getInput(std::string message)
{
    std::string input;
    std::cout << message;
    std::getline(std::cin, input);
    return input;
}
//Function to find the position of a word in the sentence
int findWordPosition(std::string sentence, std::string word)
{
    //find() return the index or string::npos
    size_t index = sentence.find(word);
    if(index == std::string::npos)
    {
        //Not found
        return -1;
    }
    else
    {
        //found at this index
        return index;
    }
}
int main()
{
    std::string sentence = getInput("Enter a sentence: ");
    std::string word = getInput("Enter the word to find: ");
    
    int position = findWordPosition(sentence, word);
    if(position == -1)
       std::cout << "The word was not found in the sentence.\n";
    else
       std::cout << "The word was found at index: " << position << '\n';

    return 0;
}