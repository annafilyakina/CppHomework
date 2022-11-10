#include <iostream>

int main()
{
    std::cout << "enter month number " << std::endl;
    int num = 0;
    std::cin >> num;
    switch (num)
    {
    case 1:
        std::cout << "January - winter " << std::endl;
        break;
    case 2:
        std::cout << "February - winter" << std::endl;
        break;
    case 3:
        std::cout << "March - spring" << std::endl;
        break;
    case 4:
        std::cout << "April - spring" << std::endl;
        break;
    case 5:
        std::cout << "May - spring " << std::endl;
        break;
    case 6:
        std::cout << "June - summer" << std::endl;
        break;
    case 7:
        std::cout << "July - summer" << std::endl;
        break;
    case 8:
        std::cout << "August - summer" << std::endl;
        break;
    case 9:
        std::cout << "September - fall " << std::endl;
        break;
    case 10:
        std::cout << "October - fall" << std::endl;
        break;
    case 11:
        std::cout << "November - fall" << std::endl;
        break;
    case 12:
        std::cout << "December - winter" << std::endl;
        break;
    default:
        std::cout << "wrong" << std::endl;
        ;
    }

    return 0;
}