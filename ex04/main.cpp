#include <string>
#include <iostream>
#include <fstream>

int main(int argc, char *argv[])
{
    if (argc != 4)
    {
        std::cout << "Wrong number of arguments, try again.\n";
        return (1);
    }

    std::ifstream in(argv[1], std::ios::in | std::ios::binary);
    if (!in.is_open())
    {
        std::cerr << "Error: cannot open input \"filename\".\n";
        return (1);
    }

    std::string outname(argv[1]);
    outname.append(".replace");
    std::ofstream out(outname.c_str(), std::ios::out | std::ios::binary | std::ios::trunc);
    if (!out.is_open())
    {
        std::cerr << "Error: cannot create output \"filename.replace'\\n";
        return (1);
    }

    out << in.rdbuf();

    if (!out)
    {
        std::cerr << "Error: write failed\n";
        return (1);
    }
    return (0);
}