#include "Replacer.hpp"

Replacer::Replacer(const std::string &search, const std::string &replace)
    : _search(search), _replace(replace) {}

std::string Replacer::processLine(const std::string &line) const {
    if (_search.empty()) return line;

    std::string result;
    size_t start = 0;
    size_t pos;

    while ((pos = line.find(_search, start)) != std::string::npos) {
        result += line.substr(start, pos - start);
        result += _replace;
        start = pos + _search.length();
    }

    result += line.substr(start);
    return result;
}
