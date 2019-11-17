//
// Created by Eva Wu on 11/7/19.
//
#include "stack.h"

//default constructor
Stack::Stack(){
    head= nullptr;
}

//take a node from the data, then insert it to the stack.
void Stack::push_head(data& data4){
    Node *newHead = new Node(data4);
    //if the list is empty
    if (head == nullptr) {
        head = newHead;
    }
        //if not, add to the top
    else {
        newHead->next = head;
        head = newHead;
    }

}

//removes a object
bool Stack::pop_head(data& data4) {
    if (head==nullptr){
        //cout<<"Empty List"<<endl;
        return false;
    } else{
        Node* previous;
        previous= head;
        head=head->next;
        previous->next= nullptr;
        delete previous;
        return true;
    }

}