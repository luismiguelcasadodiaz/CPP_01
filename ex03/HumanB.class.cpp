#include "HumanB.class.hpp"
#include <iostream>

HumanB::HumanB(std::string onename)
{
    this->_name = onename;
    this->_myweapon = 0;
}

HumanB::~HumanB(void)
{
    
}

void HumanB::attack()
{
    std::cout << this->_name << " attacks with their " << this->_myweapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &theweapon)
{
    *this->_myweapon = theweapon;
}