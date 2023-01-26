#include <iostream>
#include "MyVector.h"

template <class T>
MyVector<T>::MyVector(){
    s = 0;
    c = 10;
    data = new T[10];
}

template <class T>
void MyVector<T>::resize(){
    c += 10;
    T *a = new T[c];
    for (int i = 0; i < s; i++){
        a[i] = data[i];
    }
    delete [] data;
    data = a;
}

template <class T>
int MyVector<T>::size(){
    return s;
}

template <class T>
int MyVector<T>::capacity(){
    return c;
}

template <class T>
bool MyVector<T>::empty(){
    return s == 0;
}

template<class T>
void MyVector<T>::push_back(T item){
    if (s == c){
        resize();
    }
    data[s] = item;
    s++;
}

template <class T>
void MyVector<T>::pop_back(int n){
    s -= n;
    if (s < 0) s = 0;
}

template <class T>
void MyVector<T>::pop_back(){
    s--;
    if (s < 0) s = 0;
}

template <class T>
void MyVector<T>::clear(){
    s = 0;
}

template<class T>
T& MyVector<T>::operator[] (int n){
    if (n >= s){
        throw std::out_of_range("Index out of range");
    }
    return data[n];
    
}
