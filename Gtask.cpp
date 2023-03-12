#include <iostream>
#include <set>
#include <string>

int main()
{
    std::multiset<std::string> data;
    while (1)
    {
        char type;
        std::cin >> type;
        if (type == '#')
        {
            break;
        }
        std::string s;
        std::cin >> s;
        if (type == '+')
        {
            data.insert(s);
        }
        if (type == '-')
        {
            if (data.find(s) != data.end())
            {
                data.erase(data.find(s));
            }
        }
        if (type == '?')
        {
            if (data.find(s) != data.end())
            {
                std::cout << "YES";
            }
            else
            {
                std::cout << "NO";
            }
        }
    }
}