#ifndef REPLACER_HPP
#define REPLACER_HPP

#include <string>
#include <iostream>
#include <fstream>

class Replacer {
public:
    Replacer(const std::string &search, const std::string &replace);
    std::string processLine(const std::string &line) const;

private:
    std::string _search;
    std::string _replace;
};

#endif
