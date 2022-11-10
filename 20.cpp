#include <iostream>

int main()
{
    std::cout << "is it possible to have a rectangle with sides a, b put in a rectangle with sides c, d?" << std::endl;
    std::cout << "insert c ";
    int c = 0;
    std::cin >> c;
    std::cout << "insert d ";
    int d = 0;
    std::cin >> d;
    std::cout << "insert a ";
    int a = 0;
    std::cin >> a;
    std::cout << "insert b ";
    int b = 0;
    std::cin >> b;
    if ((a < c) && (b < d) || (a < d) && (b < c))
    {
        std::cout << "you can do it!";
    }
    else
    {
        std::cout << "its not possible";
    }
    return 0;
}