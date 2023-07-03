#include <iostream>
#include <string>
#include <regex>

int main()
{
    // Read the phrase from the user
    std::string phrase;
    std::getline(std::cin, phrase);

    // Create a regular expression to match the word "blue"
    std::regex blue_regex("\\bblue\\b");

    // Replace all occurrences of the word "blue" with "azul" in the phrase
    std::string modified_phrase = std::regex_replace(phrase, blue_regex, "azul");

    // Create a regular expression to match the word "red"
    std::regex red_regex("\\bred\\b");

    // Replace all occurrences of the word "red" with "vermelho" in the modified phrase
    modified_phrase = std::regex_replace(modified_phrase, red_regex, "vermelho");

    // Output the modified phrase
    std::cout << modified_phrase << std::endl;

    return 0;
}
