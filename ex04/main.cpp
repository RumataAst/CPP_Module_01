#include "Replace.hpp"
#include <iostream>
#include <fstream>
#include <string>

void readFile( std::ifstream &input, std::string &content ) {
    char c;
    while (input >> std::noskipws >> c) { // Read character by character, including whitespace
        content.push_back(c);
    }

    if (input.fail() && !input.eof()) { // Check for errors unrelated to reaching the end of the file
        std::cerr << "Error: Failed to read the file." << std::endl;
        throw std::runtime_error("File read error");
    }
}

void replaceSubstring( const std::string &input, const std::string &target, 
                        const std::string &replacement, std::string &output ) {
    std::string::size_type pos = 0, found;

    while ((found = input.find(target, pos)) != std::string::npos) {
        output.append(input, pos, found - pos); // Add everything up to the target substring
        output.append(replacement);            // Add the replacement
        pos = found + target.length();         // Move past the replaced substring
    }

    output.append(input, pos, input.length() - pos); // Add any remaining content after the last match
}

int main(int argc, char *argv[]) {
    if (argc != 4) {
        std::cerr << "Usage: <program> <filename> <target> <replacement>" << std::endl;
        return 1;
    }

    std::string filename = argv[1];
    std::string target = argv[2];
    std::string replacement = argv[3];

    if (target.empty()) {
        std::cerr << "Input cannot be empty. Please try again." << std::endl;
        return 2;
    }
    // Open the input file
    std::ifstream inputFile(filename.c_str());
    if (!inputFile.is_open()) {
        std::cerr << "Error: Unable to open input file." << std::endl;
        return 3;
    }

    // Read file content
    std::string content;
    try {
        readFile(inputFile, content);
    } catch (const std::runtime_error &) {
        return 4;
    }
    inputFile.close();

    // Replace target substrings
    std::string updatedContent;
    replaceSubstring(content, target, replacement, updatedContent);

    // Write the updated content to a new file
    std::ofstream outputFile((filename + ".replace").c_str(), std::ios::trunc);
    if (!outputFile.is_open()) {
        std::cerr << "Error: Unable to create output file." << std::endl;
        return 5;
    }
    outputFile << updatedContent;
    outputFile.close();

    return 0;
}
