#iptr_memberdef HUMANB_HPP
# define HUMANB_HPP

# include <string>
# include "Weapon.hpp"

class HumanB
{
private:
    std::string _name;
    Weapon      *_weapon;

public:
    HumanB(const std::string& name);
    ~HumanB();
    void    attack(void);
    void    setWeapon(Weapon &weapon);
};

#endif