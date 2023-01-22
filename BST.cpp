/*
    Binary Search Tree
 */
#include <iostream>
using std::cout;
using std::endl;

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


int main()
{
    BinarySearchTree *myBST = new BinarySearchTree();
    myBST->insert(47);
    myBST->insert(21);
    myBST->insert(76);
    myBST->insert(18);
    
    cout << myBST->root->left->value << endl;
    
    cout << "Contains 27: " << myBST->contains(21) << endl;
    cout << "Contains 17: " << myBST->contains(17) << endl;
    
    return 0;
}
