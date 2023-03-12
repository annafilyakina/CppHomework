

#include <deque>
#include <iostream>

bool comparison(int a, int b)
{
    if (a == 0 && b == 9)
        return true;
    if (a == 9 && b == 0)
        return false;
    else
        return (a > b);
}
int main()
{
    std::deque<int> first, second;

    for (int i = 0; i < 5; i++)
    {
        int card = 0;
        std::cin >> card;
        first.push_back(card);
    }
    for (int i = 0; i < 5; i++)
    {
        int card = 0;
        std::cin >> card;
        second.push_back(card);
    }

    int n = 0;
    while (!second.empty() && !first.empty())
    {
        int a = first.front();
        int b = second.front();
        first.pop_front();
        second.pop_front();

        if (comparison(a, b))
        {
            first.push_back(a);
            first.push_back(b);
        }
        else if (comparison(b, a))
        {
            second.push_back(a);
            second.push_back(b);
        }
        else if (a == b)
        {
            first.push_back(a);
            second.push_back(b);
        }
        n++;
        if (n > 1000000)
        {
            std::cout << "botva";
            break;
        }
    }

    if (first.empty())
    {
        std::cout << "second"
                  << " " << n;
    }
    if (second.empty())
    {
        std::cout << "first"
                  << " " << n;
    }
}
