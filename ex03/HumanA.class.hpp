#ifndef _HUMANA_CLASS_HPP
# define _HUMANA_CLASS_HPP
# include "Weapon.class.hpp"
# include <string>

class HumanA
{
    private:
        std::string _name;
        Weapon *_myweapon;
    public:
        HumanA(std::string onename, Weapon& theweapon);
        ~HumanA(void);
        void attack(void);
};


#endif
