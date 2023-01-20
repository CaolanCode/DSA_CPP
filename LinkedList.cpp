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
    void printList();
    void getHead() const;
    void getTail() const;
    void getLength() const;
};

LinkedList::LinkedList(int value)
{
    Node *newNode = new Node(value);
    head = newNode;
    tail = newNode;
    length = 1;
}

void LinkedList::printList()
{
    Node *temp = head;
    while(temp)
    {
        cout << temp->value << endl;
        temp = temp->next;
    }
}

void LinkedList::getHead() const
{
    cout << "Head: " << head->value << endl;
}
void LinkedList::getTail() const
{
    cout << "Tail: " << tail->value << endl;
}
void LinkedList::getLength() const
{
    cout << "Length: " << length << endl;
}

int main()
{
    LinkedList *myLinkedList = new LinkedList(4);
    
    myLinkedList->printList();
    myLinkedList->getHead();
    myLinkedList->getTail();
    myLinkedList->getLength();
    
    
    return 0;
}
