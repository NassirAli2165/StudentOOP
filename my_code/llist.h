//
//  llist.hpp
//  OOP Class
//
//  Created by Nassir Ali on 6/20/19.
//  Copyright © 2019 Nassir Ali. All rights reserved.
//

#ifndef LINKED_H
#define LINKED_H

#include <iostream>


/*
 * The struct `Node`, which is the building block of our linked list code.
 * */
struct Node {
    Node(int d, Node* n=nullptr) : data(d), next(n) {}
    int data;
    Node* next;
};


/*
 * The various functions that can operate on our linked lists:
 * */
std::ostream& operator<<(std::ostream& os, const Node* nd);
void print_list(std::ostream& os, const Node* curr);
Node* last(Node* head);
void add_at_end(Node*& head, int d);
void add_at_front(Node*& head, int d);
bool del_head(Node*& head);
bool del_tail(Node*& head);
Node* duplicate(Node* head);
Node* reverse(Node* curr, Node* new_next=nullptr);
Node* join(Node*& head, Node* reverse);

#endif
