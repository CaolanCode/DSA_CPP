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
    int pop();
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

int Stack::pop()
{
    if(height == 0) return INT_MIN;
    Node *temp = top;
    int poppedValue = top->value;
    top = top->next;
    delete temp;
    height--;
    return poppedValue;
}

void Stack::getTop()
{
    cout << "Top: " << top->value << endl;
}

void Stack::getHeight()
{
    cout << "Top: " << height << endl;
}

int main()
{
    Stack *myStack = new Stack(1);
    myStack->push(2);
    
    cout << "Pop: " << myStack->pop() << endl;
    cout << "Pop: " << myStack->pop() << endl;
    cout << "Pop: " << myStack->pop() << endl;
    
    return 0;
}
