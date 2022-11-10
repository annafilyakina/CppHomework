
#include <cstdlib> //необходима для использования рандомайзера
#include <iostream>
#include <ctime>
int generator(int min, int max)
{
    std::srand(std::time(nullptr)); //задаем время отсчета с которого берем число
    int a = 0;
    a = min + rand() % (max - min + 1); //задаем диапазон рандома
    return a;
}

int main()
{
    int a = generator(1, 9);

    int b = generator(1, 9);

    std::cout << a << " * " << b << " = ? " << std::endl;
    int answer = 0;
    std::cin >> answer;

    if (answer == a * b)
    {
        std::cout << "correct answer";
    }
    else
    {
        std::cout << "wrong answer";
    }

    return 0;
}