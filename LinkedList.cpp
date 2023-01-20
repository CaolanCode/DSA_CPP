/*
    List list class
 */
#include <iostream>
#include "Node.cpp"
using std::cout;
using std::endl;

class LinkedList
{
    Node* head;
    Node* tail;
    int length;
public:
    LinkedList(int value);
    void append(int value);
    void prepend(int value);
    bool insert(int index, int value);
};

LinkedList::LinkedList(int value)
{
    Node* newNode = new Node(value);
}
