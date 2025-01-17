#include "Harl.hpp"

int main(int argc, char *argv[]) {
    if (argc == 2) {
        Harl    Harl;

        Harl.complain(argv[1]);
    }
    else if (argc == 1) {
        std::cout << "Give Harl something to complain about" << std::endl;
    }
    else {
        std::cout << "Harl is a simple creature, he needs only 1 command to start" << std::endl;
    }
}
