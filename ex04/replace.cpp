#include "Replace.hpp"

void    replacing(FILE *filename, FILE* output, char *argv[]) {
    std::string to_be_replaced, replace;
    char buffer[10];

    to_be_replaced = argv[2];
    replace = argv[3];
    while (fgets(buffer, sizeof(buffer), filename)) {
        std::string line(buffer);
        size_t pos = 0;
        while ((pos = line.find(to_be_replaced, pos)) != std::string::npos) {
            fputs(line.substr(0, pos).c_str(), output);
            fputs(replace.c_str(), output);
            line = line.substr(pos + to_be_replaced.length());
        }
        fputs(line.c_str(), output);
    }
}

void    find_and_replace(FILE *filename,char *argv[]) {
    std::string output_filename;
    FILE* output;
    
    output_filename = std::string(argv[1]) + ".replace";
    output = fopen(output_filename.c_str(), "w");
    if (!output) {
        std::cout << "Couldn't create a file" << std::endl;
        return ; //maybe add error code in the future
    }
    replacing(filename, output, argv);
    fclose(filename);
    fclose(output);
}