#ifndef _WEAPON_CLASS_H
# define _WEAPON_CLASS_H
# include <string>

class Weapon
{
    private:
        std::string _type;
    public:
        Weapon(std::string thetype);
        ~Weapon(void);
        std::string const &getType(void);
        void setType(std::string thetype);
};

#endif