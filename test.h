#ifndef TEST_H
#define TEST_H

#include <iostream>

void swap(int a, int b);

template<class T>
size_t length(T& arr);

#include "test.cpp"  // 在头文件中包含函数模板的定义

#endif
