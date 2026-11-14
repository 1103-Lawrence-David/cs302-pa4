#include "Node.h"
Node::Node(){
    data = 0;
    left = nullptr;
    right = nullptr;
}

Node::Node(int d, Node* l, Node* r){
    data = d;
    left = l;
    right = r;
}

Node::Node(const Node& rhs){
    data = rhs.data;
    left = nullptr;
    right = nullptr;
}

int Node::getData(){
    return data;
}

void Node::setData(int d){
    data = d;
}

Node* Node::getLeft(){
    return left;
}
Node* Node::getRight(){
    return right;
}
void Node::setLeft(Node* l){
    left = l;
}
void Node::setRight(Node* r){
    right = r;
}