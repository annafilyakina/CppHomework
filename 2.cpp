
#include <iostream>
double LengthOfRound(int r)
{
    return r * 2 * 3.14;
}
double SquareOfRound(int r)
{
    return r * r * 3.14;
}

int main()
{
    std::cout << "enter the radius of the circle  ";
    int r = 0;
    std::cin >> r;

    std::cout << "the circumference is = " << LengthOfRound(r) << std::endl;
    std::cout << "the area of the circle is = " << SquareOfRound(r) << std::endl;

    return 0;
}