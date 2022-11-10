#include <iostream>

int main()
{

    std::cout << "enter the number of seconds ";
    int k = 0;
    std::cin >> k;

    float kmin = k / 60;
    float khour = k / 3600;

    std::cout << "the number of hours " << khour << std::endl;
    std::cout << "the number of minutes " << kmin << std::endl;

    return 0;
}