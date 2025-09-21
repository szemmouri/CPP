#include "Replacer.hpp"

int main(int argc, char **argv) {
    if (argc != 4) {
        std::cerr << "Usage: " << argv[0] << " <filename> <string1> <string2>\n";
        return 1;
    }

    std::string filename = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];
    std::string outputFilename = filename + ".replace";

    std::ifstream input(filename.c_str());
    if (!input) {
        std::cerr << "Error: cannot open input file: " << filename << "\n";
        return 1;
    }

    std::ofstream output(outputFilename.c_str());
    if (!output) {
        std::cerr << "Error: cannot create output file: " << outputFilename << "\n";
        return 1;
    }

    Replacer replacer(s1, s2);
    std::string line;

    while (std::getline(input, line)) {
        output << replacer.processLine(line);
        if (!input.eof()) 
            output << '\n';
    }

    std::cout << "Done. Output saved to: " << outputFilename << "\n";
    return 0;
}
