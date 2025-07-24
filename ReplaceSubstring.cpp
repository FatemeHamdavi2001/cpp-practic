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
//Function to replace all occurrences of oldWord with newWord in the sentence
std::string replaceWords(std::string sentence, std::string oldWord, std::string newWord)
{
    int index = 0;
    //Repeat while oldWord is found in the sentence
    while ((index = sentence.find(oldWord, index)) != -1) 
    {
        //Replace the found word
        sentence.replace(index, oldWord.length(), newWord);

        // Move index forward to continue search after the new word
        index += newWord.length();
    }
    return sentence;
}
int main()
{
    //Get sentence and words
    std::string sentence = getLineInput("Enter a sentence: ");
    std::string oldWord = getLineInput("Enter the word to replace: ");
    std::string newWord = getLineInput("Enter the new word: ");

    //Replace words
    std::string updatedSentence = replaceWords(sentence, oldWord, newWord);

    //Print result
    std::cout << "Updated sentence: " << updatedSentence << '\n';

    return 0;
}