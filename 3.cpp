
#include <iostream>
#include <cmath>
float ThirdSide(int a, int b)
{
    return pow((a * a + b * b), 0.5);
}
float Square(int a, int b)
{
    return a * b / 2;
}

int main()
{
    std::cout << "enter the length of side a "; //не уверена какого типа должны быть входные значения, поэтому ставлю везде инт
    int a = 0;
    std::cin >> a;
    std::cout << "enter the length of side b  ";
    int b = 0;
    std::cin >> b;

    std::cout << "length of hypotenuse = " << ThirdSide(a, b) << std::endl;
    std::cout << "triangle area = " << Square(a, b) << std::endl;

    return 0;
}