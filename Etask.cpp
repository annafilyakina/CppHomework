#include <iostream>
#include <vector>
#include <sstream>

int main()
{
    std::string expression;
    std::getline(std::cin, expression);
    std::stringstream stream(expression);
    std::vector<int> s;
    std::string curr;
    while (stream >> curr)
    {
        if (curr[0] >= '0' && curr[0] <= '9')
        {
            s.push_back(std::atoi(curr.c_str()));
        }
        else
        {
            int b = s.back();
            s.pop_back();
            int a = s.back();
            s.pop_back();

            if (curr[0] == '+')
            {
                s.push_back(a + b);
            }
            else if (curr[0] == '-')
            {
                s.push_back(a - b);
            }
            else
            {
                s.push_back(a * b);
            }
        }
    }
    std::cout << s.back();
}