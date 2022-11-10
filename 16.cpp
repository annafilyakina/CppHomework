
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

int main()
{

    std::cout << "enter a six-digit number" << std::endl;
    int num = 0;
    std::cin >> num;

    int num1 = num / 1000; //разделяем число на две половинки
    int num2 = num % 1000;

    if (sum(num1) == sum(num2))
    {
        std::cout << "it's a lucky number";
    }
    else
    {
        std::cout << "it's an unlucky number(";
    }

    return 0;
}