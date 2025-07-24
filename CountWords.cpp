#include <iostream>
#include <string>
#include <sstream> //for istringstream

//Function to get sentence from user
std::string getInput(std::string message)
{
    std::string sentence;
    std::cout << message;
    std::getline(std::cin, sentence);
    return sentence;
}
//Function to count words using istringstream
int countWords(std::string sentence)
{
    std::istringstream stream(sentence);
    std::string word;
    int count = 0;

    //Read each word from the stream
    while (stream >> word) {
        count++;
    }

    return count;
}
int main()
{
    std::string sentence = getInput("Enter a sentence: ");
    int wordCount = countWords(sentence);

    std::cout << "Number of words: " << wordCount << std::endl;

    return 0;
}