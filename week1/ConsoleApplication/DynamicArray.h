#define DYNAMIC_ARRAY
#ifdef DYNAMIC_ARRAY
#include <cassert>
#include <iostream>


template <class T>
class DynamicArray
{
public:
	DynamicArray(size_t capacity = 0);
	~DynamicArray();


	/// reallocate memory with different capacity
	bool reallocateMemory(int*& array);

	/// resize the array, if necessary
	/// double the size
	bool resize(int*& array, size_t size, size_t& capacity);

	/// add element at the end of the array
	/// if the size is less than the capacity, the array should be resized
	/// resize the array, if necessary
	bool addElement(T newElem);

	/// add element at a specified position of the array
	/// resize if necessary
	bool addElement(T newElem, size_t position);

	/// print the elements of the array
	void print(const int* array, size_t size, size_t capacity);

	/// remove the element at the specified position
	/// if the number of elements are less than 1/4 of the capacity,
	/// resize the array, use half of its capacity
	bool removeElement(size_t position);

private:
	/// allocate the memory
	bool allocateMemory(size_t capacity);

	/// delete the allocated memory
	void freeMemory();


	T* m_ptr;
	size_t m_capacity;
	size_t m_size;
};


#endif // DYNAMIC_ARRAY
