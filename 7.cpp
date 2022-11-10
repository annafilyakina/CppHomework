
#include <iostream>
#include <cmath>

int main()
{
    std::cout << "enter the first coefficient ";
    int a = 0;
    std::cin >> a;
    std::cout << "enter the second coefficient ";
    int b = 0;
    std::cin >> b;
    std::cout << "enter the free term ";
    int c = 0;
    std::cin >> c;

    float d = pow((b * b - 4 * a * c), 0.5); //по дискриминанту
    float x1 = (-b + d) / (2 * a);
    float x2 = (-b - d) / (2 * a);

    std::cout << "first root of the equation = " << x1 << " second root of the equation = " << x2 << std::endl;

    return 0;
}