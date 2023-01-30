#include <stdlib.h>
#include <iostream>
#include <time.h>
void __cout (int** array, int lines, int columns) {
    
    for (int i = 0; i < lines; i++)
    {
        std::cout << std::endl;
        for (int j = 0; j < columns; j++) {
            std::cout << array[i][j] << " ";

        }
    }
}
void __filling(int** array, int lines, int columns) {
    srand(time(NULL));
    for (int i = 0; i < lines; i++)
    {
        for (int j = 0; j < columns; j++) {

            array[i][j] = 1 + rand() % 100;
        }
    }
}

int main()
{
    

    std::cout << "enter the lines of your array " << std::endl;
    int lines = 0;
    std::cin >> lines;

    std::cout << "enter the columns of your array " << std::endl;
    int columns = 0;
    std::cin >> columns;

    int** array = new int* [lines];
    for (int i = 0; i < lines; i++) {
        array[i] = new int[columns];
    }

    int** ptr = array;
    __filling(ptr, lines, columns);

    
    std::cout << "your array : " << std::endl;
  
    
    __cout(ptr, lines, columns);
}

