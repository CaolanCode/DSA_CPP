/*
    Node class
*/
#include <iostream>
using std::cout;
using std::endl;

class Node
{
public:
    int value;
    Node *next;
    
    Node(int value)
    {
        this->value = value;
        next = nullptr;
    }
    void getFirst();
    void getLast();
    void getLength();
    
};

/*
    Queue class
 */

class Queue
{
    Node *first, *last;
    int length;
public:
    Queue(int value);
    void getFirst();
    void getLast();
    void getLength();
    
};

Queue::Queue(int value)
{
    Node *newNode = new Node(value);
    first = last = newNode;
    length = 1;
}

void Queue::getFirst()
{
    cout << "First: " << first->value << endl;
}

void Queue::getLast()
{
    cout << "Last: " << last->value << endl;
}

void Queue::getLength()
{
    cout << "Length: " << length << endl;
}

int main()
{
    Queue *myQueue = new Queue(7);
    myQueue->getLength();
    myQueue->getFirst();
    myQueue->getLast();
    
    return 0;
}
