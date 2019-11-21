#include <iostream>
#include <fstream>
#include "data.h"
#include "stack.h"
#include "queue.h"
#include "SortedLinkedList.h"


using namespace std;
int main() {

    data other;
    Stack* topToBottom = new Stack;
    Queue* line = new Queue;
    SortedLinkedList* sortedList = new SortedLinkedList;

    ifstream in;
    ofstream outStack;
    ofstream outQueue;
    ofstream outSorted;

    in.open ("../Pokemon.csv");
    outStack.open("Stack.txt");
    outQueue.open("Queue.txt");
    outSorted.open("Sorted.txt");

    if(!in.is_open()){
        cout<<"Input file did not open"<<endl;
        return 1;
    }
    if(!outStack.is_open()){
        cout<<"Stack output file did not open"<<endl;
        return 2;
    }
    if(!outQueue.is_open()){
        cout<<"Queue output file did not open"<<endl;
        return 3;
    }
    if(!outSorted.is_open()){
        cout<<"Sorted output file did not open"<<endl;
        return 4;
    }

    cout<<"All files open"<<endl<< "../Pokemon.csv is being read"<<endl;

    outQueue<<"Number, Name, HP, Attack, Defence, SpecialAttack, SpecialDefence, Speed"<<endl;
    outStack<<"Number, Name, HP, Attack, Defence, SpecialAttack, SpecialDefence, Speed"<<endl;
    outSorted<<"This list is sorted by Number"<<endl;
    outSorted<<"Number, Name, HP, Attack, Defence, SpecialAttack, SpecialDefence, Speed"<<endl;


    while (!in.eof()) {
        //getline until the the comma
        string num, name, hp, att, def, spatt, spdef, speed;
        getline(in, num, ',');
        getline(in, name, ',');
        getline(in, hp, ',');
        getline(in, att, ',');
        getline(in, def, ',');
        getline(in, spatt, ',');
        getline(in, spdef, ',');
        getline(in, speed,'\n');


        //changes from string to double
        double Num = stod (num);
        double HP = stod(hp);
        double Att = stod(att);
        double Def = stod(def);
        double Spatt = stod(spatt);
        double Spdef = stod(spdef);
        double Speed = stod(speed);

        data info = data (Num, name, HP, Att, Def, Spatt, Spdef, Speed);
        //creates an object to put the data
        topToBottom->push_head(info);
        //push into the stack
        line->enqueue_tail(info);
        //push into the queue
        sortedList->insertSorted(info);
        //put data in to the sorted list
        other=info;
    }

    cout<<"Writing data in stack inserted at head into Stack.txt"<<endl;
    cout<<"Writing data in queue inserted at tail into Queue.txt"<<endl;
    cout<<"Writing data in sorted linked list sorted by attribute into Sorted.txt"<<endl;

    //print
    topToBottom->print(outStack, other);
    line->print(outQueue, other);
    sortedList->print(outSorted, other);

    while (topToBottom->pop_head(other));
    while (line->dequeue_head());

    //close file
    in.close();
    outQueue.close();
    outSorted.close();
    outStack.close();
    cout<<"All files closed"<<endl;


    return 0;
}