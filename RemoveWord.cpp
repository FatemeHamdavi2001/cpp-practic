#include <iostream>
#include <string>

//Function to get input from user
std::string getInput(std::string message) {
    std::string text;
    std::cout << message;
    std::getline(std::cin, text);
    return text;
}
//Function to remove all occurrences of a word from a sentence
std::string removeWord(std::string sentence, std::string word)
{
    size_t pos;
    //Loop while the word is found in the sentence
    while ((pos = sentence.find(word)) != std::string::npos)
    {
        sentence.erase(pos, word.length());
        //Remove extra space before or after the removed word
        //Example: "Ali  is here" => "Ali is here"
        if (pos < sentence.length() && sentence[pos] == ' ' && pos > 0 && sentence[pos - 1] == ' ')
            //Remove one of the two spaces
            sentence.erase(pos, 1);
        else if (pos < sentence.length() && sentence[pos] == ' ')
            //Remove the space after
            sentence.erase(pos, 1);
        else if (pos > 0 && sentence[pos - 1] == ' ')
            //Remove the space before
            sentence.erase(pos - 1, 1);
    }
    return sentence;
}
int main()
{
    std::string sentence = getInput("Enter a sentence: ");
    std::string word = getInput("Enter the word to remove: ");

    std::string result = removeWord(sentence, word);

    std::cout << "Result: " << result << '\n';

    return 0;
}