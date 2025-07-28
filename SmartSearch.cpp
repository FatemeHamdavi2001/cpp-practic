#include <iostream>
#include <string>

//Function to get a full line input from the user with a prompt message
std::string getInput(const std::string& prompt) 
{
    std::string input;
    std::cout << prompt;
    std::getline(std::cin, input);
    return input;
}

//Function to check if a word exists in a sentence
bool isWordInSentence(const std::string& sentence, const std::string& word) 
{
    std::size_t position = sentence.find(word);
    return position != std::string::npos;
}

int main() 
{
    //Get sentence from user
    std::string sentence = getInput("Enter a sentence: ");

    //Get word from user
    std::string word;
    std::cout << "Enter the word to search: ";
    std::getline(std::cin, word);

    //Check if word exists in sentence
    if (isWordInSentence(sentence, word)) {
        std::cout << "The word exists in the sentence!" << '\n';
    } else {
        std::cout << "The word does not exist in the sentence." << '\n';
    }

    return 0;
}
