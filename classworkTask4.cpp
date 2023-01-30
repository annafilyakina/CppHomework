
#include <iostream>
int min(int a,int b) {
    if (a < b) {
        return a;
    }
    else {
        return b;
    }
}


int main()
{


    std::cout << std::endl << "enter the length of your array " << std::endl;
    int size = 0;
    std::cin >> size;
    int* array = new int[size]();

    std::cout << std::endl << "enter the numbers " << std::endl;
    for (int i = 0; i < size; i++) {
        std::cin >> array[i];
    }

    std::cout << std::endl << "enter k " << std::endl;
    int k = 0;
    std::cin >> k;


   
    int s = 0;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (array[j] < array[j + 1]) { 
                int t = array[j];
                array[j] = array[j + 1];
                array[j + 1] = t; 
            }
        }
    }
    for (int i = 0; i < k; i++) {
        s += array[i];


    }
    int min_sredneye = s / k;
    std::cout << min_sredneye;
}