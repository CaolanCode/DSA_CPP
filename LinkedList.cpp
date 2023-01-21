/*
    List list class
 */
#include <iostream>
#include "NodeLL.cpp"
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
    void deleteNode(int index);
    void printList();
    void getHead() const;
    void getTail() const;
    void getLength() const;
    Node *get(int index);
    bool set(int index, int value);
    void reverse();
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
    if(length == 1) {
        head = tail = nullptr;
    } else {
        head = head->next;
    }
    length--;
}

Node* LinkedList::get(int index)
{
    if(index < 0 || index >= length) return nullptr;
    Node *temp = head;
    for(int i = 0; i <  index; i++) temp = temp->next;
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
    if(index == 0) {
        prepend(value);
        return true;
    } else if(index == length) {
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
    if(index == 0) return deleteFirst();
    if(index == length-1) return deleteLast();
    Node *prev = get(index-1);
    Node *temp = prev->next;
    prev->next = temp->next;
    delete temp;
    length--;
}

void LinkedList::reverse()
{
    Node *temp = head;
    head = tail;
    tail = temp;
    Node* after = temp->next;
    Node* before = nullptr;
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
    LinkedList *myLinkedList = new LinkedList(1);
    myLinkedList->append(2);
    myLinkedList->append(3);
    myLinkedList->append(4);
    
    myLinkedList->printList();
    cout << endl;
    
    myLinkedList->reverse();
    
    myLinkedList->printList();
    
    
    delete myLinkedList;
    
    return 0;
}
