#include "HumanA.class.hpp"
#include <iostream>

HumanA::HumanA(std::string onename, Weapon theweapon)
{
    this->_name = onename;
    this->_myweapon = theweapon;
}

HumanA::~HumanA(void)
{
    
}

void HumanA::attack()
{
    std::cout << this->_name << " attacks with their " << this->_myweapon.getType() << std::endl;
}