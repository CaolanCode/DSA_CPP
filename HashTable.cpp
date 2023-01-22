/*
    Hash Table
*/
#include <iostream>
using std::cout;
using std::endl;
using std::string;

class Node
{
public:
    string key;
    int value;
    Node *next;
    Node(string key, int value)
    {
        this->key = key;
        this->value = value;
        next = nullptr;
    }
};

class HashTable
{
    static const int SIZE = 7;
    Node *dataMap[SIZE];
public:
    void printTable();
};

void HashTable::printTable()
{
    for(int i = 0; i < SIZE; i++)
    {
        cout << i << ":" << endl;
        if(dataMap[i]) {
            Node *temp = dataMap[i];
            while(temp)
            {
                cout << " {" << temp->key << ", " << temp->value << "}";
                temp = temp->next;
            }
        }
    }
}

int main()
{
    HashTable *myHashTable = new HashTable();
    myHashTable->printTable();
    
    return 0;
}
