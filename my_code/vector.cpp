//
//  vector.cpp
//  OOP Class
//
//  Created by Nassir Ali on 6/18/19.
//  Copyright © 2019 Nassir Ali. All rights reserved.
//

#include <iostream>
#include "vector.h"

using namespace std;

void print_vector(const MyVec& v) {
}


MyVec::MyVec() {
    data = new int();
    sz = 0;
    capacity = 0;
}

MyVec::MyVec(const MyVec& v2) {
    data = new int(*v2.data);
    sz = v2.sz;
    capacity = v2.capacity;
}

MyVec::~MyVec() {
    delete data;
}

MyVec& MyVec::operator=(const MyVec& v2) {
    if(this == &v2){ return *this; }
    delete data;
    sz = 0;
    capacity = 0;
    data = new int(*v2.data);
    sz = v2.sz;
    capacity = v2.capacity;
    return *this;
}


/*
 * == is true when every element of the vectors are the same in
 * the same order. (Thus they must be the same size.)
 * */
bool operator==(MyVec& v1, MyVec& v2) {
    if(v1.size() != v2.size()){ return false; }
    for(int i =0; i < v1.size(); i++){
        if(v1[i] != v2[i]){ return false; }
    }
    return true;
}

/*
 * Puts an element at the back of a vector.
 * */
void MyVec::push_back(int val) {
    if(capacity < 10){
    data[capacity] = val;
    capacity += 1;
    }
    else {
        cout << "Error: Unable to add value as capacity has been reached!" << endl;
    }
}

/*
 * this [] is for reading items from the MyVec:
 * It returns the i-th element.
 * */
int MyVec::operator[](int i) const {
    int j = data[i];
    return j;
}

/*
 * this [] allows write access to items in the MyVec:
 * It returns a reference to the i-th element.
 * */
int& MyVec::operator[](int i) {
    return data[i];
}
