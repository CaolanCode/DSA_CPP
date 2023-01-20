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
    ~LinkedList();
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

LinkedList::~LinkedList()
{
     Node *temp = head;
     while(head)
     {
         head = head->next;
         delete temp;
         temp = head;
     }
}

void LinkedList::append(int value)
{
    Node *newNode = new Node(value);
    if(length == 0) {
        head = newNode;
        tail = newNode;
    } else {
        tail->next = newNode;
        tail = newNode;
    }
    length++;
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
    
    myLinkedList->append(2);
    myLinkedList->printList();
    myLinkedList->getHead();
    myLinkedList->getTail();
    myLinkedList->getLength();
    
    delete myLinkedList;
    
    return 0;
}
