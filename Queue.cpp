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
    int dequeue();
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

int Queue::dequeue()
{
    if(length == 0) return INT_MIN;
    Node *temp = first;
    int dequeueValue = first->value;
    if(length == 1) first = last = nullptr;
    else {
        first = first->next;
    }
    length--;
    delete temp;
    return dequeueValue;
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
    cout << "Dequeue value: " << myQueue->dequeue() << endl;
    cout << "Dequeue value: " << myQueue->dequeue() << endl;
    cout << "Dequeue value: " << myQueue->dequeue() << endl;
    
    
    return 0;
}
