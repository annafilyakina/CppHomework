
#include <iostream>
#include <cmath>

int main()
{
    std::cout << "enter a decimal four-digit number ";
    int a = 0;
    std::cin >> a;
    int s = 0;
    if (a > 9999)
    {
        std::cout << "the number is too large, the sum of the first four digits will be calculated : " << std::endl;
    }
    for (int i = 0; i < 4; i++) // четыре цифры=> 4 раза пробегаем цикл
    {
        s = s + a % 10;
        a = a / 10;
    }

    std::cout << "the sum of the digits is = " << s << std::endl;

    return 0;
}