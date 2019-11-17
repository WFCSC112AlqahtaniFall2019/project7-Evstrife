//
// Created by Eva Wu on 11/7/19.
//


#ifndef PROJECT7_QUEUE_H
#define PROJECT7_QUEUE_H

#include "LinkedList.h"
using namespace std;
class Queue : public LinkedList {
public:
    Queue();//default constructor
    void enqueue_tail(Node data2);
    bool dequeue_head();

private:
    Node* tail;
    //Node* front;

};

#endif //PROJECT7_QUEUE_H
