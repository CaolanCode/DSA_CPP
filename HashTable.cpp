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
    int hash(string key);
    void set(string key, int value);
    int get(string key);
};

int HashTable::hash(string key)
{
    int hash = 0;
    for(int i = 0; i < key.length(); i++)
    {
        int ascciValue = int(key[i]);
        hash = (hash + ascciValue * 23) % SIZE;
    }
    return hash;
}

void HashTable::set(string key, int value)
{
    int index = hash(key);
    Node *newNode = new Node(key, value);
    if(dataMap[index] == nullptr) dataMap[index] = newNode;
    else {
        Node *temp = dataMap[index];
        while(temp->next)temp = temp->next;
        temp->next = newNode;
    }
    
}

int HashTable::get(string key)
{
    int index = hash(key);
    Node *temp = dataMap[index];
    while(temp)
    {
        if(temp->key == key) return temp->value;
        temp = temp->next;
    }
    return 0;
}

void HashTable::printTable()
{
    for(int i = 0; i < SIZE; i++)
    {
        cout << i << ":" << endl;
        if(dataMap[i]) {
            Node *temp = dataMap[i];
            while(temp)
            {
                cout << " {" << temp->key << ", " << temp->value << "}\n";
                temp = temp->next;
            }
        }
    }
}

int main()
{
    HashTable *myHashTable = new HashTable();
    myHashTable->set("Nails", 100);
    myHashTable->set("Tile", 50);
    myHashTable->set("Lumber", 80);
    myHashTable->set("Bolts", 200);
    myHashTable->set("Screws", 140);
    myHashTable->printTable();
    
    return 0;
}
