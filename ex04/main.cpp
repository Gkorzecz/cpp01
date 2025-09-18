#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

std::string replace_all(const std::string& src, const std::string& from, const std::string& to)
{
    if (from.empty())
        return (src);
    std::string out;

    std::string::size_type pos = 0;
    std::string::size_type prev = 0;
    while ((pos = src.find(from, prev)) != std::string::npos)
    {
        out.append(src, prev, pos - prev);
        out.append(to);
        prev = pos + from.size();
    }
    out.append(src, prev, (src.size() - prev));
    return (out);
}

int main(int argc, char *argv[])
{
    if (argc != 4)
    {
        std::cout << "Wrong number of arguments, needs (1) filename (2) string to replace (3) what to replace it with\n";
        return (1);
    }

    std::ifstream in(argv[1], std::ios::in | std::ios::binary);
    if (!in.is_open())
    {
        std::cerr << "Error: cannot open input \"" << argv[1] << "\".\n";
        return (1);
    }

    std::string outname(argv[1]);
    outname += ".replace";
    std::ofstream out(outname.c_str(), std::ios::out | std::ios::binary | std::ios::trunc);
    if (!out.is_open())
    {
        std::cerr << "Error: cannot create output \"" << outname << "\".\n";
        return (1);
    }

    std::ostringstream buffer;
    buffer << in.rdbuf();
    const std::string s1(argv[2]);
    const std::string s2(argv[3]);
    const std::string replaced = replace_all(buffer.str(), s1, s2);

    out.write(replaced.data(), replaced.size());
    if (!out)
    {
        std::cerr << "Error: write failed\n";
        return (1);
    }
    return (0);
}