/*
    Linked List Revision
 */
#include <iostream>
#include "Node.cpp"
using std::cout;
using std::endl;
using std::string;

class LinkedList
{
    Node *head, *tail;
    int length;
public:
    LinkedList(int value);
    ~LinkedList();
    void append(int value);
    void prepend(int value);
    void deleteLast();
    void deleteFirst();
    Node* get(int index);
    bool set(int index, int value);
    bool insert(int index, int value);
    void deleteNode(int index);
    void reverse();
    void printList();
    void getHead();
    void getTail();
    void getLength();
};

LinkedList::LinkedList(int value)
{
    Node *newNode = new Node(value);
    tail = head = newNode;
    length = 1;
}

LinkedList::~LinkedList()
{
    Node *temp = head;
    while(head)
    {
        head = head->next;
        delete temp;
        temp = head->next;
    }
}

void LinkedList::append(int value)
{
    Node *newNode = new Node(value);
    if(length == 0) {
        head = tail = newNode;
    } else {
        tail->next = newNode;
        tail = newNode;
    }
    length++;
}

void LinkedList::deleteLast()
{
    if(length == 0) return;
    if(length == 1) {
        head = tail = nullptr;
    } else {
        Node *temp, *pre;
        temp = pre = head;
        while(temp->next)
        {
            pre = temp;
            temp = temp->next;
        }
        tail = pre;
        tail->next = nullptr;
        delete temp;
    }
    length--;
}

void LinkedList::prepend(int value)
{
    Node *newNode = new Node(value);
    if(length == 0) tail = head = newNode;
    else {
        newNode->next = head;
        head = newNode;
    }
    length++;
}

void LinkedList::deleteFirst()
{
    if(length == 0) return;
    if(length == 1) tail = head = nullptr;
    else head = head->next;
    length--;
}

Node* LinkedList::get(int index)
{
    if(index < 0 || index >= length) return nullptr;
    Node *temp = head;
    for(int i = 0; i < index; i++) temp = temp->next;
    return temp;
}

bool LinkedList::set(int index, int value)
{
    Node *temp = get(index);
    if(temp) {
        temp->value = value;
        return true;
    }
    return false;
}

bool LinkedList::insert(int index, int value)
{
    if(index < 0 || index > length) return false;
    if(length == 0) {
        prepend(value);
        return true;
    } else if(index == length){
        append(value);
        return true;
    }
    Node *newNode = new Node(value);
    Node *temp = get(index-1);
    newNode->next = temp->next;
    temp->next = newNode;
    length++;
    return true;
}

void LinkedList::deleteNode(int index)
{
    if(index < 0 || index >= length) return;
    if(index == 0) deleteFirst();
    else if(index == length-1) deleteLast();
    Node *pre = get(index-1);
    Node *temp = pre->next;
    pre->next = temp->next;
    delete temp;
    length--;
}

void LinkedList::reverse()
{
    Node *temp = head;
    head = tail;
    tail = temp;
    Node *after = temp->next;
    Node *before = nullptr;
    for(int i = 0; i < length; i++)
    {
        after = temp->next;
        temp->next = before;
        before = temp;
        temp = after;
    }
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

void LinkedList::getHead()
{
    cout << "Head: " << head->value << endl;
}

void LinkedList::getTail()
{
    cout << "Tail: " << tail->value << endl;
}

void LinkedList::getLength()
{
    cout << "Length: " << length << endl;
}

int main()
{
    LinkedList *myLinkedList = new LinkedList(2);
    myLinkedList->append(3);
    myLinkedList->prepend(1);
    myLinkedList->printList();
    myLinkedList->reverse();
    myLinkedList->printList();
    
    return 0;
}
