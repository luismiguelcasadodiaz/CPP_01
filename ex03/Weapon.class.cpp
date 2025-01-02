#include "Weapon.class.hpp"

Weapon::Weapon(std::string thetype)
{
    this->_type = thetype;
    //std::cout << thetype << " Weapon" << std::endl;
}

Weapon::Weapon(void)
{
    this->_type = "Anonymous";
    //std::cout << "Anonymous Weapon" << std::endl;
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