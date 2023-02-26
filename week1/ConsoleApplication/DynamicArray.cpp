#include "DynamicArray.h"

template<class T>
DynamicArray<T>::DynamicArray()
{
	allocateMemory();
}

template<class T>
DynamicArray<T>::~DynamicArray()
{
}

template<class T>
bool DynamicArray<T>::reallocateMemory(int*& array, size_t size, size_t newCapacity)
{
	return false;
}

template<class T>
bool DynamicArray<T>::resize(int*& array, size_t size, size_t& capacity)
{
	return false;
}

template<class T>
bool DynamicArray<T>::addElement(int*& array, size_t& size, size_t& capacity, int newElem)
{
	return false;
}

template<class T>
bool DynamicArray<T>::addElement(int*& array, size_t& size, size_t& capacity, int newElem, size_t position)
{
	return false;
}

template<class T>
void DynamicArray<T>::print(const int* array, size_t size, size_t capacity)
{
}

template<class T>
bool DynamicArray<T>::removeElement(int*& array, size_t& size, size_t& capacity, size_t position)
{
	return false;
}

template<class T>
void DynamicArray<T>::allocateMemory(int*& array, size_t capacity)
{
}

template<class T>
void DynamicArray<T>::freeMemory(int*& array, size_t& size, size_t& capacity)
{
}
