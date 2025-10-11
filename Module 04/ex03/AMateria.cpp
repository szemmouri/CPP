#include "AMateria.hpp"

AMateria::AMateria() : type("unknown") {}

AMateria::AMateria(std::string const & t) : type(t) {}

AMateria::AMateria(const AMateria &other) { *this = other; }

AMateria &AMateria::operator=(const AMateria &other) {
    if (this != &other)
        type = other.type;
    return *this;
}

AMateria::~AMateria() {}

std::string const & AMateria::getType() const { return type; }

void AMateria::use(ICharacter& target) {
    (void)target;
    // Default implementation: do nothing
}
