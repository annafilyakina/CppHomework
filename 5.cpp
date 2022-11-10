
#include <iostream>
#include <cmath>
float ThirdSide(int a, int b) //из третьей задачи
{
    return pow((a * a + b * b), 0.5);
}

int main()
{
    std::cout << "enter a Cartesian X coordinate ";
    int x = 0;
    std::cin >> x; //считываем первую декартову координату
    std::cout << "enter a Cartesian Y coordinate ";
    int y = 0;
    std::cin >> y; //считываем вторую координату

    float r = ThirdSide(x, y); // расстояние от точки до начала координат(гипотенуза)

    float sinus = y / r;
    float alfaA = acos(sinus);  //угол наклона
    alfaA = alfaA / 3.14 * 180; // в градусах

    std::cout
        << "radial coordinate = " << r << " angular coordinate = " << alfaA << "°" << std::endl; //выводит радиальную и угловую координаты

    return 0;
}