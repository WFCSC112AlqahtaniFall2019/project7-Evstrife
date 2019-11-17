//
// Created by Eva Wu on 11/7/19.
//
#include <string>
#include "SortedLinkedList.h"
using namespace std;

//creates a Node pointer and inserts it into a sorted List at the correct place based on the overloaded comparison
//comparison operators in Data.cpp
void SortedLinkedList::insertSorted(Node data3) {

    Node *newData = new Node(data3);
    //if the list is empty
    if (head == nullptr) {
        head = newData;
        //if not empty all of the below is run to insert the node in the new location
    } else {
        Node *current = head;
        Node *previous = nullptr;

        //current->data > newData->data
        if (newData->data1 < current->data1) {
            newData->next = head;
            head = newData;
            return;
        }
        //keeps searching for the correct location and going through the list
        previous = current;
        current = current->next;

        while (current) {
            //newData->data > current->data
            if (current->data1 < newData->data1) {
                previous = current;
                current = current->next;
            } else {
                break;
            }
        }

        newData->next = current;
        previous->next = newData;

    }
}