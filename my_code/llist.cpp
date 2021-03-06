//
//  llist.cpp
//  OOP Class
//
//  Created by Nassir Ali on 6/20/19.
//  Copyright © 2019 Nassir Ali. All rights reserved.
//

#include <iostream>
#include "llist.h"

using namespace std;



/*
 * Output a Node pointer.
 * */
ostream& operator<<(ostream& os, const Node* nd) {
    os << nd->data;
    return os;
}


/*
 * Add a node to the end of a list.
 * */
void add_at_end(Node*& head, int d) {
    if(head->next != nullptr){
        add_at_end(head->next, d);
        return;
    }
    head->next = new Node(d);
}


/*
 * Given the head of a list, print the whole thing.
 * Let's do this recursively!
 * */
void print_list(ostream& os, const Node* curr) {
    if(curr == nullptr){
        os << "The List is Empty" << endl;;
        return;
    }
    os << curr->data;
    if(curr->next != nullptr){
        os << " -> ";
        print_list(os, curr->next);
    }
    os << endl;
}

/*
 * Add a node at the front of a linked list.
 * */
void add_at_front(Node*& head, int d) {
    Node* new_head = new Node(d);
    new_head->next = head;
    head = new_head;
}

bool del_tail(Node*& head) {
    if(!head){ return false; }
    else{
        if(head->next == nullptr){
            delete head;
            head = nullptr;
            return true;
        }
        else{
            return del_tail(head->next);
        }
    }
}

bool del_head(Node*& head) {
    if(!head){ return false; }
    else{
        Node* old_head = head;
        head = head->next;
        delete old_head;
        return true;
    }
}



Node* reverse(Node* curr, Node* new_next){
    if(!curr){ return new_next; }
    else{ return reverse(curr->next, new Node(curr->data, new_next)); }
}

Node* duplicate(Node* head){
    if(!head){ return nullptr; }
    else{
        if(head->next == nullptr){
            Node* end_copy = new Node(head->data);
            return end_copy;
        }
        Node* copy_head = new Node(head->data);
        copy_head->next = duplicate(head->next);
        return copy_head;
    }
}

Node* join(Node*& head, Node* reverse){
    Node* last_of_head = last(head);
    last_of_head->next = reverse;
    return head;
}


/*
 * Get the last node of a list.
 * */
Node* last(Node* head) {
    if(head->next == nullptr){
        return head;
    }
    return last(head->next);
}
