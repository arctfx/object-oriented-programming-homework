#include "DynamicArray.h"

template<class T>
DynamicArray<T>::DynamicArray(size_t capacity)
{
	allocateMemory(capacity);
}

template<class T>
DynamicArray<T>::~DynamicArray()
{
	freeMemory();
}

template<class T>
bool DynamicArray<T>::reallocateMemory(int*& ptr_temp)
{
	for (size_t i = 0; i < m_size; i++)
	{
		ptr_temp[i] = m_ptr[i];
	}
}

template<class T>
bool DynamicArray<T>::resize(const size_t size)
{
	if (size > capacity)
	{
		allocateMemory(m_capacity * 2);
		resize(&size);
	}
	return true;

}

template<class T>
bool DynamicArray<T>::addElement(T newElem)
{
	//check if the position is correct!
	if (position >= m_size)
	{
		return false;
	}

	//check if the capacity is sufficient
	if (m_capacity <= m_size) // ! <
	{
		resize(m_capacity * 2);
	}

	m_ptr[m_size + 1] = newElem;
	++m_size;

	return true;

}

template<class T>
bool DynamicArray<T>::addElement(T newElem, size_t position)
{
	//check if the position is correct!
	if (position >= m_size)
	{
		return false;
	}

	//check if the capacity is sufficient
	if (m_capacity <= m_size) // ! <
	{
		resize(m_capacity * 2);
	}
	
	size_t i = m_size - 1;
	while (i >= position)
	{
		m_ptr[i + 1] = m_ptr[i];
		--i;
	}
	m_ptr[position] = newElem;
	++m_size;

	return true;
}

template<class T>
void DynamicArray<T>::print()
{
	for (size_t i = 0; i < m_size; i++)
	{
		std::cout << m_ptr[i] << " ";
	}
	std::cout << "; " << "size: " << m_size << "; " << "capacity: " << m_capacity << ".";
}

template<class T>
bool DynamicArray<T>::removeElement(size_t position)
{
	//check if the position is correct!
	if (position >= m_size)
	{
		return false;
	}
	
	//check if the capacity is too big
	if (m_capacity > m_size*2) 
	{
		resize(m_capacity/2);
	}
	
	size_t i = position + 1;
	while (i < m_size)
	{
		m_ptr[i - 1] = m_ptr[i];
		++i;
	}
	--m_size;

	return true;
}

template<class T>
bool DynamicArray<T>::allocateMemory(size_t capacity)
{
	if (capacity > 0)
	{
		try
		{
			int*& ptr_temp = new int& [capacity];

			//reallocate the data
			reallocateMemory();

			m_capacity = capacity;

			delete[] ptr_temp;

		}
		catch (const std::exception& e)
		{
			throw e;
		}
	}
	else
	{
		delete[] m_ptr;
		m_ptr = nullptr;
	}
}

template<class T>
void DynamicArray<T>::freeMemory()
{
	try
	{
		delete[] m_ptr;
	}
	catch (const std::exception& e)
	{
		throw e;
	}
}
