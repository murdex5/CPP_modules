#ifndef ITER_HPP
#define ITER_HPP

#include <cstddef>

template <typename T, typename F>
void iter(T *arr, const size_t len, F func)
{
    size_t i;

    i = 0;
    while (i < len)
    {
        func(arr[i]);
        i++;
    }
}
#endif