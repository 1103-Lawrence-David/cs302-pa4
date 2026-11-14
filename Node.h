#include <iostream>
#include <string>
#include <fstream>
using namespace std;

#ifndef NODE_H
#define NODE_H

class Node{
    int data;
    Node* left, *right;
    
    public:
        Node();
        Node(int, Node*, Node*);
        Node(const Node&);

        int getData();
        void setData(int);

        Node* getLeft();
        Node* getRight();
        void setLeft(Node*);
        void setRight(Node*);

};
#endif
