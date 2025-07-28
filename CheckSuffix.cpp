#include <iostream>
#include <string>

//this Function gets sentence and suffix from the user
void getInput(std::string &sentence, std::string &suffix)
{
    std::cout << "Enter a sentence: ";
    std::getline(std::cin, sentence);
    std::cout << "Enter the suffix to check: ";
    std::getline(std::cin, suffix);
}

//this Function check if sentence starts with prefix
bool startsWithPrefix(const std::string& sentence, const std::string& prefix) {
    //Check if the sentence is at least as long as the prefix
    if (sentence.length() < prefix.length()) return false;

    //Use substr to extract beginning of the sentence and compare it
    return sentence.substr(0, prefix.length()) == prefix;
}

//this Function checks if the sentence ends with the given suffix
bool endsWithSuffix(const std::string &sentence, const std::string &suffix)
{
    //If suffix is longer than the sentence return false
    if (suffix.length() > sentence.length())
        return false;
    //Get the last part of the sentence with same length as suffix
    std::string endPart = sentence.substr(sentence.length() - suffix.length());

    //Compare it with suffix
    return endPart == suffix;
}

//This function prints whether the sentence starts or ends with the keyword
void showResult(const std::string &sentence, const std::string &keyword)
{
    if (startsWithPrefix(sentence, keyword))
        std::cout << "The sentence STARTS with \"" << keyword << "\".\n";
    else
        std::cout << "The sentence does NOT start with \"" << keyword << "\".\n";

    if (endsWithSuffix(sentence, keyword))
        std::cout << "The sentence ENDS with \"" << keyword << "\".\n";
    else
        std::cout << "❌ The sentence does NOT end with \"" << keyword << "\".\n";
}

int main() 
{
    //Declare variables to store the sentence and the keyword
    std::string sentence, keyword;

    //Get input from user
    getInput(sentence, keyword);

    //Show result using helper function
    showResult(sentence, keyword);

    return 0;
}