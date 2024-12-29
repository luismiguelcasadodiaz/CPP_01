#ifndef _HUMANB_CLASS_HPP
# define _HUMANB_CLASS_HPP
# include "Weapon.class.hpp"
# include <string>

class HumanB
{
    private:
        std::string _name;
        Weapon *_myweapon;
    public:
        HumanB(std::string onename);
        ~HumanB(void);
        void attack(void);
        void setWeapon(Weapon &theweapon);
};


#endif
