#include <iostream>
#include <cmath>
double getMedianToTheLastSide(int c, int d, int a)
{
    return 0.5 * pow(((2 * c * c) + (2 * d * d) - (a * a)), 0.5); //вычисляет медиану проведенную у стороне "a"
}

int main()
{
    std::cout << "define a triangle with the sides c,d,a" << std::endl;
    std::cout << "insert c ";
    int c = 0;
    std::cin >> c;
    std::cout << "insert d ";
    int d = 0;
    std::cin >> d;
    std::cout << "insert a ";
    int a = 0;
    std::cin >> a;

    double newA = getMedianToTheLastSide(c, d, a); //стороны нового треугольник
    double newB = getMedianToTheLastSide(c, a, d);
    double newC = getMedianToTheLastSide(a, d, c);

    std::cout << "the medians of the triangle built from the medians of the original one are: " << std::endl;
    std::cout << getMedianToTheLastSide(newA, newB, newC) << std::endl; //медианы новго треугольника
    std::cout << getMedianToTheLastSide(newA, newC, newB) << std::endl;
    std::cout << getMedianToTheLastSide(newC, newB, newA) << std::endl;
    return 0;
}