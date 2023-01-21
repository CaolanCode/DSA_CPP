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
    void deleteFirst();
    Node *get(int index);
    bool set(int index, int value);
    bool insert(int index, int value);
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

void DoublyLinkedList::deleteFirst()
{
    if(length == 0) return;
    else if(length == 1) head = tail = nullptr;
    else {
        Node *temp = head;
        head = head->next;
        head->prev = nullptr;
        delete temp;
    }
    length--;
}

Node* DoublyLinkedList::get(int index)
{
    if(index < length || index >= length) return nullptr;
    Node *temp = head;
    if(index < length/2) {
        for(int i = 0; i < index; i++) temp = temp->next;
    } else {
        temp = tail;
        for(int i = length-1; i > index; i--) temp = temp->prev;
    }
    return temp;
}

bool DoublyLinkedList::set(int index, int value)
{
    Node *temp = get(index);
    if(temp) {
        temp->value = value;
        return true;
    }
    return false;
}

bool DoublyLinkedList::insert(int index, int value)
{
    if(index < 0 || index > length) return false;
    else if(index == 0) {
        prepend(value);
        return true;
    } else if(index == length - 1) {
        append(value);
        return true;
    } else {
        Node *newNode = new Node(value);
        Node *before = get(index-1);
        Node *after = before->next;
        before->next = newNode;
        after->prev = newNode;
        newNode->prev = before;
        newNode->next = after;
    }
    return true;
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
