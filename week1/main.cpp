#include "DynamicArray.h"

// Task:
// Implement a dynamic array with a specified capacity and with certain number of elements (size)
// reason why the input argument for the array is of type int*&?
// create a header file with the declarations of the functions,
// move the definitions to a .cpp file
// show how they are used in main.cpp


int main()
{
    // dynamically allocated array which can be resized
    int* array{ nullptr };

    // capacity of the array
    size_t capacity = 3;

    // exact number of elements in the array
    size_t size = 0;

    allocateMemory(array, capacity);

    addElement(array, size, capacity, 1);
    addElement(array, size, capacity, 2);
    addElement(array, size, capacity, 3);

    std::cout << "The capacity of the array is " << capacity << std::endl;
    std::cout << "The real count of the elements in the array is " << size << std::endl;
    print(array, size, capacity);

    addElement(array, size, capacity, 4, 2);

    std::cout << "\nThe capacity of the array is " << capacity << std::endl;
    std::cout << "The real count of the elements in the array is " << size << std::endl;
    print(array, size, capacity);

    removeElement(array, size, capacity, 0);
    removeElement(array, size, capacity, 0);
    removeElement(array, size, capacity, 0);

    std::cout << "\nThe capacity of the array is " << capacity << std::endl;
    std::cout << "The real count of the elements in the array is " << size << std::endl;

    print(array, size, capacity);

    freeMemory(array, size, capacity);
}