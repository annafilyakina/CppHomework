
#include <iostream>

int main()
{
    std::cout << "enter a number from 1 to 99 ";
    int a = 0;
    std::cin >> a;

    if (a % 10 == 1)
    {
        std::cout << a << " kopeyka";
    }
    else if (a % 10 < 5)
    {
        std::cout << a << " kopeyki";
    }
    else
    {
        std::cout << a << " kopeyek";
    }

    return 0;
}