#ifndef TEST_H
#include "test.h"
#endif

void swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;

    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;
}

template<class T>
size_t length(T& arr)
{
    return sizeof(arr) / sizeof(arr[0]);
}
