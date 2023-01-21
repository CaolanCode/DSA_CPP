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
    void printQueue();
    void enqueue(int value);
};

Queue::Queue(int value)
{
    Node *newNode = new Node(value);
    first = last = newNode;
    length = 1;
}

void Queue::enqueue(int value)
{
    Node *newNode = new Node(value);
    if(length == 0) first = last = newNode;
    else {
        last->next = newNode;
        last = newNode;
    }
    length++;
}

void Queue::printQueue()
{
    Node *temp = first;
    while(temp)
    {
        cout << temp->value << endl;
        temp = temp->next;
    }
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
    Queue *myQueue = new Queue(1);
    myQueue->enqueue(2);
    myQueue->printQueue();
    
    return 0;
}
