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
    Stack class
*/
class Stack
{
    Node *top;
    int height;
    
public:
    Stack(int value);
    void push(int value);
    void getTop();
    void getHeight();
};

Stack::Stack(int value)
{
    Node *newNode = new Node(value);
    top = newNode;
    height = 1;
}

void Stack::push(int value)
{
    Node *newNode = new Node(value);
    newNode->next = top;
    top = newNode;
    height++;
}

void Stack::getTop()
{
    cout << "Top: " << top->value << endl;
}

void Stack::getHeight()
{
    cout << "Top: " << height << endl;
}
