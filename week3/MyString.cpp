#include "MyString.h"

MyString::MyString(size_t size) {
    m_str = new char[size]; // initialized a string containing one terminating zero
}

MyString::MyString(const char* str) {
    m_str = new char[strlen(str)];
    strcpy(m_str, str);
}

MyString::~MyString() { delete[] m_str; }

MyString& MyString::operator=(const MyString& other) {
    // TODO: insert return statement here
    if (this != &other) {
        delete[] m_str;
        m_str = new char[strlen(other.get_str())];
        strcpy(m_str, other.get_str());
    }
    return *this;
}

MyString& MyString::operator+(const MyString& other)
{
    this->append(other.get_str());
}

char& MyString::at(unsigned indx) {
    try
    {
        return m_str[indx];
    }
    catch (const std::exception& e)
    {
        std::cout << e.what();
    }
}

int MyString::find(char c, unsigned startPos) {
    try {
        for (size_t i = startPos; i < m_size; i++)
        {
            if (m_str[i] == c)
                return i;
        }
        return -1;
    }
    catch (const std::exception& e)
    {
        std::cout << e.what();
    }
}

bool MyString::empty() {
    return (strlen(m_str) == 0) ? true : false;
}

MyString MyString::substr(unsigned pos, unsigned n) {
    return MyString();
}

void MyString::append(const MyString& str) {
    size_t size = strlen(m_str);
    size_t new_size = size + strlen(str.get_str());

    char* temp = new char[new_size];

    for (size_t i = 0; i < size; i++) {
        temp[i] = m_str[i]; // warning c6386
    }
    for (size_t i = size; i < new_size; i++) {
        temp[i] = str.get_str()[i - size];
    }

    delete[] m_str;
    m_str = temp;
}

void MyString::print() { std::cout << m_str; }

size_t MyString::get_length()
{
    return strlen(m_str);
}
