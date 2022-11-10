
#include <iostream>

int main()
{

    std::cout << "enter purchase price " << std::endl;
    float a = 0;
    std::cin >> a;

    if (a > 1000)
    {
        std::cout << a * 0.9 << " - discounted price";
    }
    else
    {
        std::cout << a << " - final price, discount does not apply";
    }

    return 0;
}