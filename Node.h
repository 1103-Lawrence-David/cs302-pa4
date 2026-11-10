#include <iostream>

#ifndef NODE_H
#define NODE_H

class Node{
    int data;
    Node* next;
    
    public:
        Node();
        Node(int, Node*);
        Node(const Node&);

        int getData();
        void setData(int);

        Node* getNext();
        void setNext(Node*);

};
#endif
