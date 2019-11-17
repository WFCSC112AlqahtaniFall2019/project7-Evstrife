/* Class: LinkedList
 * Description: Very basic singly linked List class with single head
 * class for use with Data object. It is meant to be inherited for
 * more complex linked lists. (Comes with Node class.)
 */

#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include "data.h" //You need to create this

class Node {
public:
    data data1; // object at node
    Node *next; // pointer to next node

    Node(data &d)
    {
        data1 = d;
        next= nullptr;
    }
};

class LinkedList {
protected:
    Node *head;
public:
    LinkedList();
    LinkedList(const LinkedList& list);
    const LinkedList& operator=(LinkedList rhs);
    void print(ostream &os, data data0);
    void pop_head();
    ~LinkedList();
};

#endif //LINKEDLIST_H
