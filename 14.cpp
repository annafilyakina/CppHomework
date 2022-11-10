

#include <iostream>

int main()
{

    std::cout << "enter the cost of the call in minutes " << std::endl;
    int cost = 0;
    std::cin >> cost;
    std::cout << "enter call duration in minutes " << std::endl;
    int time = 0;
    std::cin >> time;
    std::cout << "enter the day of the week (1-7) " << std::endl;
    int day = 0;
    std::cin >> day;

    if (day == 6 || day == 7)
    {
        std::cout << cost * time * 0.8 << " - discounted price";
    }
    else
    {
        std::cout << cost * time << " - final price, discount does not apply";
    }

    return 0;
}