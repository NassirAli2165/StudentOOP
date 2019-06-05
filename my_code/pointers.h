//
//  pointers.h
//  OOP Class
//
//  Created by Nassir Ali on 6/5/19.
//  Copyright © 2019 Nassir Ali. All rights reserved.
//

#ifndef pointers_h
#define pointers_h

#include <string>
#include <vector>

void inc_by_value(int n);
void inc_with_pointer(int* n);
void inc_with_reference(int& n);


struct Thing {
    int val;
    Thing(int i) : val(i) {}
};

Thing** create_array_of_things(int n);
void print_all_things(Thing** things, int n);
void double_all_things(Thing** things, int n);
void delete_all_things(Thing** things, int n);

struct Student {
    std::string name;
    Student* ta;
    Student(std::string nm) : name(nm), ta(nullptr) {}
};

void assignTA(Student* s, Student* ta);
void printTAs(std::vector<Student*>& students);

#endif /* pointers_h */
