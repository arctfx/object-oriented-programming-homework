#ifndef MYSTRING_H
#define MYSTRING_H
#include <cstring>
#include <iostream>

class MyString {
public:
    //Constructors
    MyString(size_t size = 1);
    MyString(const char* str);
    ~MyString();

    // Operators
    MyString& operator=(const MyString& other);
    MyString& operator+(const MyString& other); // = append

    
    // Gets the symbol at index indx
    // If no such index, throws an exception
    char& at(unsigned indx);
    // Returns the index of the first occurence of char c
    // Starts iterating at index startPos
    // If no such char found, returns -1
    int find(char c, unsigned startPos = 0);
    // Returns whether m_str is empty
    // = (strlen(m_str) == 0)
    bool empty();
    // Returns the substring starting at index pos with a length of n symbols
    // If no such index, throws an exception
    // If pos + n > m_size, returns the substring starting at index pos
    // and ending at index m_size
    MyString substr(unsigned pos = 0, unsigned n = 0);
    // Concatenated this->m_str and str
    void append(const MyString& str);
    // Prints m_str on the console
    void print();

    // Getters
    const char* get_str() const { return m_str; }
    size_t get_length();

private:
    char* m_str = nullptr;
    size_t m_size = 0; //includes terminating zeros

};

#endif
