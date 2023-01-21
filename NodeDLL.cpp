/*
    Node class for Doubly LL
 */

class Node
{
public:
    int value;
    Node *next, *prev;
    
    Node(int value)
    {
        this->value = value;
        next = prev = nullptr;
    }
};
