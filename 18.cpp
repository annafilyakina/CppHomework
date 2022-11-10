#include <iostream>

int palindromer(int num)
{
    int num_reversed = 0;
    while (num != 0)
    {
        num_reversed = num_reversed * 10 + num % 10; //берет последнюю цифру исходного, делая его первой цифрой нового
        num = num / 10;
    }
    return num_reversed;
}

int main()
{

    std::cout << "enter a natural four-digit number ";
    int num = 0;
    std::cin >> num;
    if (num == palindromer(num))
    {
        std::cout << "the number is a palindrome" << std::endl;
    }
    else
    {
        std::cout << "the number is not a palindrome" << std::endl;
    }

    return 0;
}