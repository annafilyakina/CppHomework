
#include <iostream>
int sum(int a) //вычисляет сумму цифр заданного числа
{
    int s = 0;
    while (a != 0)
    {

        s = s + a % 10;
        a = a / 10;
    }
    return s;
}
int mult(int a) //вычисляет произведение цифр заданного числа
{
    int m = 1;
    while (a != 0)
    {

        m = m * (a % 10);
        a = a / 10;
    }
    return m;
}

int main()
{

    std::cout << "enter a three-digit number" << std::endl;
    int num = 0;
    std::cin >> num;
    std::cout << "enter number b" << std::endl;
    int b = 0;
    std::cin >> b;
    if (mult(num) > b)
    {
        std::cout << "product of digits > " << b << std::endl; //произведение цифр больше b
    }
    else
    {
        std::cout << "product of digits <= " << b << std::endl;
    }

    if (sum(num) % 7 == 0)
    {
        std::cout << "the sum of the digits is a multiple of 7 " << std::endl; //сумма цифр кратна 7
    }
    else
    {
        std::cout << "the sum of the digits is not a multiple of 7 " << std::endl;
    }

    return 0;
}