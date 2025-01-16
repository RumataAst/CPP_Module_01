#include "Replace.hpp"


void read_file(std::ifstream &in, std::string &out) {
    char c;
    while (in >> std::noskipws >> c) {
        out.push_back(c);
    }
    if (in.fail() && !in.eof()) {
        std::cerr << "read_file():: File is corrupted." << std::endl;
        throw;
    }
}

void write_to_new_file(std::string &file_content, const std::string &to_be_replaced, const std::string &replace_with) {
    std::string::size_type pos;
    while ((pos = file_content.find(to_be_replaced)) != std::string::npos) {
        file_content.replace(pos, to_be_replaced.length(), replace_with);
    }
}

int main(int argc, char *argv[]) {
    if (argc != 4) {
        std::cerr << "Main:: Number of arguments should be 4" << std::endl;
        return 1;
    }

    std::string input_filename = argv[1];
    std::string to_be_replaced = argv[2];
    std::string replace_with = argv[3];

    std::ifstream in(input_filename.c_str());
    if (!in.is_open()) {
        std::cerr << "Main:: Opening initial file failed" << std::endl;
        return 98;
    }

    std::string file_content;
    try {
        read_file(in, file_content);
    } catch (...) {
        return 3;
    }

    in.close();

    write_to_new_file(file_content, to_be_replaced, replace_with);

    std::ofstream out((input_filename + ".replace").c_str(), std::ios::trunc);
    if (!out.is_open()) {
        std::cerr << "Main:: Creating output file failed" << std::endl;
        return 4;
    }

    out << file_content;
    out.close();

    return 0;
}