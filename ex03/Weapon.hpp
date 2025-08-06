#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <string>

class Weapon
{
private:
    std::string type;

public:
    Weapon();
    explicit Weapon(const std::string &initType);
    ~Weapon();

    void setType(const std::string& newType); 
    const std::string& getType() const;
    
};

#endif