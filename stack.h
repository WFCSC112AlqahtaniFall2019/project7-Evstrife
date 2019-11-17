//
// Created by Eva Wu on 11/7/19.
//

#ifndef PROJECT7_STACK_H
#define PROJECT7_STACK_H

#include "LinkedList.h"
#include "data.h"

using namespace std;
class Stack : public LinkedList {

public:
    Stack();
    void push_head(data& data4);
    bool pop_head(data& data4);

};


#endif//PROJECT7_STACK_H
