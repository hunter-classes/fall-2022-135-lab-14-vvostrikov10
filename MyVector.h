#pragma once
#include <iostream>
template<class T>
class MyVector{
    private:
        int s;
        int c;
        T *data;
        void resize();
    public:
        MyVector();
        int size();
        int capacity();
        bool empty();
        void push_back(T item);
        void pop_back(int n);
        void pop_back();
        void clear();
        T& operator[] (int n);
};
#include "MyVector.cxx"