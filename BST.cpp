/*
    Binary Search Tree
 */
#include <iostream>
#include <queue>
using std::cout;
using std::endl;
using std::queue;

class Node
{
public:
    int value;
    Node *left, *right;
    
    Node(int value)
    {
        this->value = value;
        left = right = nullptr;
    }
};

class BinarySearchTree
{
public:
    Node *root;
    BinarySearchTree();
    bool insert(int value);
    bool contains(int value);
    void BFS();
    void DFSPreOrder();
    void DFSPreOrder(Node *currentNode);
    void DFSPostOrder();
    void DFSPostOrder(Node *currentNode);
    void DFSInOrder();
    void DFSInOrder(Node *currentNode);
};

BinarySearchTree::BinarySearchTree()
{
    root = nullptr;
}

bool BinarySearchTree::insert(int value)
{
    Node *newNode = new Node(value);
    if(root == nullptr) {
        root = newNode;
        return true;
    }
    Node *temp = root;
    while(true)
    {
        if(newNode->value == temp->value) return false;
        if(newNode->value < temp->value) {
            if(temp->left == nullptr) {
                temp->left = newNode;
                return true;
            }
            temp = temp->left;
        } else {
            if(temp->right == nullptr) {
                temp->right = newNode;
                return true;
            }
            temp = temp->right;
        }
    }
}

bool BinarySearchTree::contains(int value)
{
    Node *temp = root;
    while(temp)
    {
        if(value < temp->value) {
            temp = temp->left;
        } else if(value > temp->value) {
            temp = temp->right;
        } else {
            return true;
        }
    }
    return false;
}

void BinarySearchTree::BFS()
{
    queue<Node*> myQueue;
    myQueue.push(root);
    
    while(myQueue.size() > 0)
    {
        Node *currentNode = myQueue.front();
        myQueue.pop();
        cout << currentNode->value << " ";
        if(currentNode->left) {
            myQueue.push(currentNode->left);
        }
        if(currentNode->right) {
            myQueue.push(currentNode->right);
        }
    }
    
}

void BinarySearchTree::DFSPreOrder()
{
    DFSPreOrder(root);
}

void BinarySearchTree::DFSPreOrder(Node *currentNode)
{
    cout << currentNode->value << " ";
    if(currentNode->left) DFSPreOrder(currentNode->left);
    if(currentNode->right) DFSPreOrder(currentNode->right);
}

void BinarySearchTree::DFSPostOrder()
{
    DFSPostOrder(root);
}
void BinarySearchTree::DFSPostOrder(Node *currentNode)
{
    if(currentNode->left) DFSPostOrder(currentNode->left);
    if(currentNode->right) DFSPostOrder(currentNode->right);
    cout << currentNode->value << " ";
}

void BinarySearchTree::DFSInOrder()
{
    DFSInOrder(root);
}

void BinarySearchTree::DFSInOrder(Node *currentNode)
{
    if(currentNode->left) DFSInOrder(currentNode->left);
    cout << currentNode->value << " ";
    if(currentNode->right) DFSInOrder(currentNode->right);
    
}

int main()
{
    BinarySearchTree *myBST = new BinarySearchTree();
    myBST->insert(47);
    myBST->insert(21);
    myBST->insert(76);
    myBST->insert(18);
    myBST->insert(53);
    myBST->insert(2);
    myBST->insert(92);
    
    cout << myBST->root->left->value << endl;
    
    cout << "Contains 27: " << myBST->contains(21) << endl;
    cout << "Contains 17: " << myBST->contains(17) << endl;
    
    myBST->BFS();
    cout << endl;
    
    myBST->DFSPreOrder();
    cout << endl;
    
    myBST->DFSPostOrder();
    cout << endl;
    
    myBST->DFSInOrder();
    cout << endl;
    
    return 0;
}
