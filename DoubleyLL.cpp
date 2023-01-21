/*
    Doubly Linked List
 */
#include <iostream>
#include "NodeDLL.cpp"
using std::cout;
using std::endl;

class DoublyLinkedList
{
    Node *head, *tail;
    int length;
public:
    DoublyLinkedList(int value);
    void append(int value);
    void deleteLast();
    void prepend(int value);
    void printList();
    void getHead();
    void getTail();
    void getLength();
    
    
};

DoublyLinkedList::DoublyLinkedList(int value)
{
    Node *newNode = new Node(value);
    head = tail = newNode;
    length = 1;
}

void DoublyLinkedList::append(int value)
{
    Node *newNode = new Node(value);
    if(length == 0) tail = head = newNode;
    else {
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
    length++;
}

void DoublyLinkedList::deleteLast()
{
    if(length == 0) return;
    if(length == 1) head = tail = nullptr;
    else {
        Node *temp = tail;
        tail = tail->prev;
        tail->next = nullptr;
        delete temp;
    }
    length--;
}

void DoublyLinkedList::prepend(int value)
{
    Node *newNode = new Node(value);
    if(length == 0) head = tail = newNode;
    else {
        head->prev = newNode;
        newNode->next = head;
        head = newNode;
    }
    length++;
}

void DoublyLinkedList::printList()
{
    Node *temp = head;
    while(temp)
    {
        cout << temp->value << endl;
        temp = temp->next;
    }
}

void DoublyLinkedList::getHead()
{
    cout << "Head: " << head->value << endl;
}

void DoublyLinkedList::getTail()
{
    cout << "Tail: " << tail->value << endl;
}

void DoublyLinkedList::getLength()
{
    cout << "Length: " << length << endl;
}
