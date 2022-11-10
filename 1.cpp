
#include <iostream>
float square(int b1, int b2, int h)
{
    return h * (b2 + b1) / 2;
}
int main()
{
    std::cout << "insert b1 ";
    int b1 = 0;
    std::cin >> b1;
    std::cout << "insert b2 ";
    int b2 = 0;
    std::cin >> b2;
    std::cout << "insert h ";
    int h = 0;
    std::cin >> h;
    std::cout << square(b1, b2, h) << std::endl;
    return 0;
}
