#ifndef ARRAY_TPP
#define ARRAY_TPP

#include "Array.hpp"

template <typename T>
Array<T>::Array() : _data(NULL), _size(0) {}

template <typename T>
Array<T>::Array(unsigned int n) : _data(new T[n]()), _size(n) {}

template <typename T>
Array<T>::Array(const Array &other) : _data(NULL), _size(0)
{
    *this = other;
}

template <typename T>
Array<T> &Array<T>::operator=(const Array &other)
{
    if (this != &other)
    {
        T *tmp = NULL;
        if (other._size > 0)
            tmp = new T[other._size];
        for (unsigned int i = 0; i < other._size; i++)
            tmp[i] = other._data[i];
        delete[] _data;
        _data = tmp;
        _size = other._size;
    }
    return *this;
}

template <typename T>
Array<T>::~Array()
{
    delete[] _data;
}

template <typename T>
T &Array<T>::operator[](unsigned int index)
{
    if (index >= _size)
        throw OutOfBoundsException();
    return _data[index];
}

template <typename T>
const T &Array<T>::operator[](unsigned int index) const
{
    if (index >= _size)
        throw OutOfBoundsException();
    return _data[index];
}

template <typename T>
unsigned int Array<T>::size() const
{
    return _size;
}

template <typename T>
const char *Array<T>::OutOfBoundsException::what() const throw()
{
    return "Array: index out of bounds";
}

#endif