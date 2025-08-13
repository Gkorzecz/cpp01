#include "Harl.hpp"
#include <iostream>
#define DEBUG 0
#define INFO 1
#define WARNING 2
#define ERROR 3

    Harl::Harl()
    {}

    Harl::~Harl()
    {}

    void Harl::debug(void)
    {
        std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!\n";
    }
    void Harl::info(void)
    {
        std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!\n";
    }
    void Harl::warning(void)
    {
        std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years, whereas you started working here just last month.\n";
    }
    void Harl::error(void)
    {
        std::cout << "This is unacceptable! I want to speak to the manager now.\n";
    }

    static int level_to_code(const std::string& s)
    {
        const char* names[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
        for (int i = 0; i < 4; ++i)
            if (s == names[i])
                return (i);
        return (-1);
    }

    void Harl::complain(std::string level)
    {
        void (Harl::*ptr_member[4])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
        switch (level_to_code(level))
        {
            case DEBUG:   (this->*ptr_member[DEBUG])();
                break ;
            case INFO:    (this->*ptr_member[INFO])();
                break ;
            case WARNING: (this->*ptr_member[WARNING])();
                break ;
            case ERROR:   (this->*ptr_member[ERROR])();
                break ;
            default: std::cout << "Invalid Level.\n";
        }
    }