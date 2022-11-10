
#include <iostream>

int main()
{

    std::cout << "enter the first side of the triangle " << std::endl;
    int a = 0;
    std::cin >> a;
    std::cout << "enter the second side of the triangle " << std::endl;
    int b = 0;
    std::cin >> b;
    std::cout << "enter the third side of the triangle " << std::endl;
    int c = 0;
    std::cin >> c;

    if (a == b || a == c || b == c)
    {
        std::cout << "isosceles triangle"; //если хотя бы две стороны равны -> треугольник равнобедренный
    }
    else
    {
        std::cout << "triangle is not isosceles";
    }

    return 0;
}