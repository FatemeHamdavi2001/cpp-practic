#include <iostream>
#include <string>

//Function to get input from user
std::string getInput(std::string message) {
    std::string text;
    std::cout << message;
    std::getline(std::cin, text);
    return text;
}
//Function to swap two words in a sentence
std::string swapWords(std::string sentence, std::string word1, std::string word2)
{
    size_t pos1 = sentence.find(word1);
    size_t pos2 = sentence.find(word2);
    
    //Check if both words exist
    if (pos1 == std::string::npos || pos2 == std::string::npos)
        return "One or both words not found in the sentence.";
    //Make sure word1 comes before word2
    if (pos1 > pos2)
    {
        std::swap(pos1, pos2);
        std::swap(word1, word2);
    }
    //Replace word2 with a placeholder
    sentence.replace(pos2, word2.length(), "___TEMP___");

    //Replace word1 with word2
    sentence.replace(pos1, word1.length(), word2);

    //Replace placeholder with word1
    pos2 = sentence.find("___TEMP___");
    sentence.replace(pos2, 10, word1);

    return sentence;
}
int main()
{
    std::string sentence = getInput("Enter a sentence: ");
    std::string word1 = getInput("Enter the first word to swap: ");
    std::string word2 = getInput("Enter the second word to swap: ");

    std::string result = swapWords(sentence, word1, word2);

    std::cout << "Result: " << result << '\n';

    return 0;
}