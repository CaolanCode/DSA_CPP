/*
    Node class
 */

class Node
{
public:
    int value;
    Node* next;
    Node(int value);
};

Node::Node(int value)
{
    this->value = value;
    next = nullptr;
}
