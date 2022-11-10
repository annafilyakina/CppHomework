
#include <iostream>

int main()
{
    std::cout << "enter your weight ";
    int v = 0;
    std::cin >> v;
    std::cout << "enter your height ";
    int h = 0;
    std::cin >> h;

    if (h - 100 == v)
    {
        std::cout << v << " - your ideal weight";
    }
    else if (h - 100 < v)
    {
        std::cout << "need to lose weight up to " << h - 100 << " kg";
    }
    else
    {
        std::cout << "you need to gain weight up to " << h - 100 << " kg";
    }

    return 0;
}