#include "Harl.hpp"

int main(void)
{
    Harl testHarl;
    testHarl.complain("ERROR");
    testHarl.complain("INFO");
    testHarl.complain("DEBUG");
    testHarl.complain("WARNING");
    testHarl.complain("UNKNOWN");
    testHarl.complain("");
}