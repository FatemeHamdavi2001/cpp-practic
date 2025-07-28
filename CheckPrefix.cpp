#include <iostream>
#include <string>

//Function to check if sentence starts with a prefix
bool startsWithPrefix(std::string sentence, std::string prefix)
{
    //Check if the length of the prefix is less than or equal to sentence
    if (sentence.length() < prefix.length())
        return false;

    //Compare the beginning of the sentence with the prefix
    std::string beginning = sentence.substr(0, prefix.length());

    return beginning == prefix;
}

int main()
{
    std::string sentence, prefix;

    //Get sentence and prefix from user
    std::cout << "Enter a sentence: ";
    std::getline(std::cin, sentence);

    std::cout << "Enter a prefix to check: ";
    std::getline(std::cin, prefix);

    //Check and print result
    if (startsWithPrefix(sentence, prefix))
        std::cout << "Yes, the sentence starts with the prefix.\n";
    else
        std::cout << "No, the sentence does NOT start with the prefix.\n";

    return 0;
}
