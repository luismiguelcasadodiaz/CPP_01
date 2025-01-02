
#include "Weapon.class.hpp"
#include "HumanA.class.hpp"
#include "HumanB.class.hpp"
#include <iostream>

int main()
{
    {
    std::cout << "---- test 1 ------" << std::endl;
    Weapon club = Weapon("crude spiked club");
    HumanA bob("Bob", club);
    bob.attack();
    club.setType("some other type of club");
    bob.attack();
    std::cout << "---- end  1 ------" << std::endl;
    }
    {
    std::cout << "---- test 2 ------" << std::endl;
    Weapon club = Weapon("crude spiked club");
    HumanB jim("Jim");
    jim.attack();
    jim.setWeapon(club);
    jim.attack();
    club.setType("some other type of club");
    jim.attack();
    std::cout << "---- end  2 ------" << std::endl;
    }
return 0;
}