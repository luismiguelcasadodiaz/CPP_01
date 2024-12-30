
#include "Weapon.class.hpp"
#include "HumanA.class.hpp"
#include "HumanB.class.hpp"
#include <iostream>

int main()
{
    {
    Weapon club = Weapon("crude spiked club");
    std::cout << club.getType();
    HumanA bob("Bob", club);
    bob.attack();
    club.setType("some other type of club");
    bob.attack();
    }
    {
    Weapon club = Weapon("crude spiked club");
    HumanB jim("Jim");
    jim.setWeapon(club);
    jim.attack();
    club.setType("some other type of club");
    jim.attack();
    }
return 0;
}