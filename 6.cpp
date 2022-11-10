#include <iostream>
#include <cmath>

int main()
{
    std::cout << "enter polar coordinate (radial) ";
    float r = 0;
    std::cin >> r;
    std::cout << "enter angular coordinate (in degrees) ";
    float alfa = 0;
    std::cin >> alfa;
    float x = r * cos(alfa * 3.14 / 180); //градусы переводим в радианы
    float y = r * sin(alfa * 3.14 / 180);

    std::cout << "x coordinate = " << x << " y coordinate = " << y << std::endl;

    return 0;
}