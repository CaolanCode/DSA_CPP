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
    void deleteLast();
    void deleteFirst();
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

void LinkedList::deleteLast()
{
    if(length == 0) return;
    Node *temp = head;
    if(length == 1) {
        head = tail = nullptr;
    } else {
        Node *pre = head;
        while(temp->next)
        {
            pre = temp;
            temp = temp->next;
        }
        tail = pre;
        tail->next = nullptr;
    }
    length--;
    delete temp;
}

void LinkedList::prepend(int value)
{
    Node *newNode = new Node(value);
    if(length == 0) {
        head = tail = newNode;
    } else {
        newNode->next = head;
        head = newNode;
    }
    length++;
}

void LinkedList::deleteFirst()
{
    if(length == 0) return;
    Node *temp = head;
    if(length == 1) {
        head = tail = nullptr;
    } else {
        head = head->next;
    }
    delete temp;
    length--;
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
    LinkedList *myLinkedList = new LinkedList(2);
    myLinkedList->append(3);
    myLinkedList->prepend(1);
    
    myLinkedList->printList();
    
    delete myLinkedList;
    
    return 0;
}
