#include "Weapon.class.hpp"

Weapon::Weapon(std::string thetype)
{
    this->_type = thetype;
}

Weapon::~Weapon(void)
{
    this->_type = "";
}

std::string const &Weapon::getType(void)
{
    return (this->_type);
}

void Weapon::setType(std::string thetype)
{
    this->_type = thetype;
}