#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "MyVector.h"
#include <iostream>

TEST_CASE("<push_back tests>"){
    MyVector<int> a;
    a.push_back(0);
    CHECK(a[0] == 0);
    a.push_back(1);
    CHECK(a[0] == 0);
    CHECK(a[1] == 1);
}

TEST_CASE("<size tests>"){
    MyVector<int> a;
    CHECK(a.size() == 0);
    a.push_back(0);
    CHECK(a.size() == 1);
    a.push_back(1);
    CHECK(a.size() == 2);
}

TEST_CASE("<pop_back tests>"){
    MyVector<int> a;
    for (int i = 0; i < 10; i++){
        a.push_back(i);
    }
    a.pop_back();
    CHECK(a.size() == 9);
    a.pop_back(3);
    CHECK(a.size() == 6);
    a.pop_back(7);
    CHECK(a.size() == 0);
}

TEST_CASE("<capacity and resize tests>"){
    MyVector<int> a;
    for (int i = 0; i < 10; i++){
        a.push_back(i);
    }
    CHECK(a.capacity() == 10);
    a.push_back(10);
    CHECK(a.capacity() == 20);
    a.pop_back(7);
    CHECK(a.capacity() == 20);
}

TEST_CASE("<empty tests>"){
    MyVector<int> a;
    CHECK(a.empty());
    a.push_back(0);
    CHECK(!(a.empty()));
    a.pop_back(1);
    CHECK(a.empty());
}

TEST_CASE("clear tests"){
    MyVector<int> a;
    a.clear();
    CHECK(a.empty());
    a.push_back(0);
    a.push_back(0);
    a.push_back(0);
    a.clear();
    CHECK(a.empty());
}

TEST_CASE("[] operator tests"){
    MyVector<int> a;
    for (int i = 0; i < 10; i++){
        a.push_back(i);
    }
    CHECK(a[2] == 2);
    a[2] = 3;
    CHECK(a[2] == 3);
    //checking that the vector throws out of bounds exception properly
    try{
        a[11] = 5;
        CHECK(false);
    }
    catch(const std::out_of_range& e){
        CHECK(true);
    }
}







