#include <iostream>
#include <string>
#include "iter.hpp"

template <typename T>
void print(const T &x) { std::cout << x << " "; }

void addOne(int &x) { x++; };

int main(void)
{
    int a[3] = {1, 2, 3};
    const int b[3] = {4, 5, 6};
    std::string s[2] = {"hello", "world"};

    ::iter(a, 3, addOne);
    ::iter(a, 3, print<int>);
    std::cout << std::endl;
    ::iter(b, 3, print<int>);
    std::cout << std::endl;
    iter(s, 2, print<std::string>);
    std::cout << std::endl;
    return 0;
}