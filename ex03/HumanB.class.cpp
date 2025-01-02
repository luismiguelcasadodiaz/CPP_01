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
// As constructor works without weapon, i have to control its existence
// to avoid a segmentation fault
void HumanB::attack()
{
    if (this->_myweapon != 0)
        std::cout << this->_name << " attacks with their " << this->_myweapon->getType() << std::endl;
    else
        std::cout << this->_name << " has not weapon" << std::endl;
}

void HumanB::setWeapon(Weapon& theweapon)
{ 
    this->_myweapon = &theweapon;
}