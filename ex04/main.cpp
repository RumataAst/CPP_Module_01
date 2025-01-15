#include "Replace.hpp"
void    find_and_replace(const FILE* filename,const std::string &to_be_replaced,const std::string &replace) {
    FILE    *output = fopen("filename.replace", "w");
    if (!output) {
        std::cout << "Couldn't create a file" << std::endl;
        return ; //maybe add error code in the future
    }
}



int checkSpacesAndLength(const std::string& input) {
    if (input.empty()) {
        std::cout << "Input cannot be empty. Please try again." << std::endl;
        return EMPTY_INPUT;
    }

    bool isOnlySpaces = true;
    for (size_t i = 0; i < input.length(); ++i)  {
        if (!std::isspace(input[i])) {
            isOnlySpaces = false;
            break;
        }
    }
    if (isOnlySpaces) {
        std::cout << "Input cannot be just spaces or tabs. Please try again." << std::endl;
        return ONLY_SPACES;
    }
    return VALID_INPUT;
}
/* Take 3 arguments: Filename, s1, s2. 
    Find every s1 and replace it to s2 
    without using replace function*/
int main (int argc, char *argv[]) {
    std::string to_be_replaced, replace;
    FILE *filename;

    if (argc == 4){
        filename = fopen(argv[1], "r");
        to_be_replaced = argv[2];
        replace = argv[3];
        if (!filename) {
            std::cout << "File does not exist or cannot be opened." << std::endl;
            return (FILE_DOESNT_EXIST);
        }
        if (checkSpacesAndLength(to_be_replaced) == VALID_INPUT 
            && checkSpacesAndLength(replace) == VALID_INPUT)
            {
                find_and_replace(filename, to_be_replaced, replace);
            }
    }
    else {
        std::cout << "There should be only 3 arguments" << std::endl;
        return (INCORRECT_NUMBER_ARGV);
    }
    return 0;
}