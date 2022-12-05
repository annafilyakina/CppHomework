
#include <time.h>
#include <iostream>
template <typename T>
void BubbleSort(T array1[],int size) {
    
    for (int i = 0; i < size; i++) {// пробегаемся по всему массиву 
        for (int j = 0; j < size - i - 1; j++) { 
            if (array1[j] > array1[j + 1]) { //попарно сравниваем
                int t = array1[j];
                array1[j] = array1[j + 1]; 
                array1[j + 1] = t; //меняем местами в порядке возрастания
            }
        }
    }
}

template <typename T>
void SelectionSort(T array[], int size) {
    for (int i = 0; i < size - 1; i++) { 
        int idxmin = i;             //в начале каждой итерации назначаем элемент с текущим индексом минимальным
        for (int j = i + 1; j < size; j++) {

            if (array[j] < array[idxmin])//находим минимальный из оставшихся элементов
                idxmin = j;
        }
        int t = array[idxmin];
        array[idxmin] = array[i];// меняем местами текущий(iый) элемент и минимальный(jый)
        array[i] = t;
        
        
    }
}

template <typename T>
void countSort(T array[], int size) {
    
    T max = array[0];//ищем максимальный элемент массива
    for (int i = 1; i < size; i++) {
        if (array[i] > max)
            max = array[i];
    }
    
    int count_array[100]; 
    // задаем счетчик элементов оригинального массива 
    // с длинной на один больше чем максимальный элемент оригинального
    for (int i = 0; i <= max; ++i) { //заполняем нулями
        count_array[i] = 0;
    }
    
    for (int i = 0; i < size; i++) {
         count_array[array[i]]++;      // в каждой ячейке счетного массива записываем 
                                       // количество чисел в исходном массиве равных индексу ячейки счетного
         
        
  
    }

    for (int i = 1; i <= max; i++) { //суммируем массив
        count_array[i] = count_array[i] + count_array[i - 1];
    }
    
    int result[100]; // задаем финальный отсортированный массив
    for (int i = size - 1; i >= 0; i--) {
        // уменьшенное на 1 значение ячеек в счетном массиве = место элемента в отсортированном
        result[count_array[array[i]] - 1] = array[i]; 
        count_array[array[i]]--;
    }

    
    for (int i = 0; i < size; i++) {
        array[i] = result[i];
    }
}
template <typename T>
void Output(T array1, int size1) {
    for (int i = 0; i < size1; i++) {
        std::cout << array1[i] << " ";
    }
    std::cout << std::endl;
}


int main()
{
    int array1[] = { 3,5,6,3,0,12,4 }; //задаем тестовые массивы
    int array2[] = { 9,1,3,56,33,0,1,8 };
    int array3[] = { 14,6,0,2,6,8,15,1 };

    int size1 = sizeof(array1) / sizeof(array1[0]);
    int size2 = sizeof(array2) / sizeof(array2[0]);
    int size3 = sizeof(array3) / sizeof(array3[0]);

    Output(array1, size1);
    BubbleSort(array1, size1);
    std::cout << "BubbleSorted : "; 
    Output(array1, size1);
    
    Output(array2, size2);
    SelectionSort(array2, size2);
    std::cout << "SelectionSorted : ";
    Output(array2, size2);

    Output(array3, size3);
    SelectionSort(array3, size3);
    std::cout << "CountSorted : ";
    Output(array3, size3);


    return 0;
}

