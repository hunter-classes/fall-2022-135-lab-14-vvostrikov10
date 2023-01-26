#include <iostream>
#include "MyVector.h"

int main(){
    MyVector<int> a;
    for (int i = 0; i < 11; i++){
        a.push_back(i);
    }
    std::cout << "printing vector:" << std::endl;
    for (int i = 0; i < a.size(); i++){
        std::cout << a[i] << std::endl;
    }
    std::cout << "vector size: " << a.size() << std::endl;
    std::cout << "vector capacity: " << a.capacity() << std::endl;
}