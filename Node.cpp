#include "Node.h"
Node::Node(){
    data = 0;
    next = nullptr;
}

Node::Node(int d, Node* n){
    data = d;
    next = n;
}

Node::Node(const Node& rhs){
    data = rhs.data;
    next = nullptr;
}

int Node::getData(){
    return data;
}

void Node::setData(int d){
    data = d;
}

Node* Node::getNext(){
    return next;
}

void Node::setNext(Node* n){
    next = n;
}