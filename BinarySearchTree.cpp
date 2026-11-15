#include "BinarySearchTree.h"

BinarySearchTree::BinarySearchTree(){
    root = nullptr;
}

void BinarySearchTree::insert(int value){
    root = insertHelper(root, value);
}

Node* BinarySearchTree::insertHelper(Node* n, int val){
    if(n == nullptr){
        Node* newNode = new Node();
        newNode->setData(val);
        return newNode;
    }
    if(val < n->getData()){
        n->setLeft(insertHelper(n->getLeft(), val));
    }
    if(val > n->getData()){
        n->setRight(insertHelper(n->getRight(), val));
    }
    return n;
}

bool BinarySearchTree::search(int val){
    return searchHelper(root, val);
}

bool BinarySearchTree::searchHelper(Node* r, int value){
    if(r == nullptr){
        return false;
    }
    if(r->getData() == value){
        return true;
    }
    if(r->getData() > value){
        return searchHelper(r->getLeft(), value);
    }
    if(r->getData() < value){
        return searchHelper(r->getRight(), value);
    }
    cout << "error in search" << endl; //debugging
    return false;
}

bool BinarySearchTree::deleteValue(int value){
    if(!search(value)){
        return false;
    }
    root = deleteHelper(root,value);
    return true;
}

Node* BinarySearchTree::deleteHelper(Node* r, int value){
    if(r == nullptr){
        return nullptr;
    }
    if(r->getData() == value){
        if(r->getLeft() == nullptr && r->getRight() == nullptr){
            delete r;
            return nullptr;
        }
        if(r->getLeft() == nullptr){
            Node* temp = r->getRight();
            delete r;
            return temp;
        }
        if(r->getRight() == nullptr){
            Node* temp = r->getLeft();
            delete r;
            return temp;
        }
        Node* successor = findMinNode(r->getRight());
        r->setData(successor->getData());
        r->setRight(deleteHelper(r->getRight(), successor->getData()));
    }
    if(r->getData() > value){
        r->setLeft(deleteHelper(r->getLeft(), value));
    }
    if(r->getData() < value){
        r->setRight(deleteHelper(r->getRight(), value));
    }
    return r;
}
        
void BinarySearchTree::displayInorder(){
    displayInorderHelper(root);
}

void BinarySearchTree::displayPreorder(){
    displayPreorderHelper(root);
}

void BinarySearchTree::displayPostorder(){
    displayPostorderHelper(root);
}

void BinarySearchTree::displayInorderHelper(Node* n){
    if(n != nullptr){
        displayInorderHelper(n->getLeft());
        cout << n->getData() << endl;
        displayInorderHelper(n->getRight());
    }
}

void BinarySearchTree::displayPreorderHelper(Node* n){
    if(n != nullptr){
        cout << n->getData() << endl;
        displayInorderHelper(n->getLeft());
        displayInorderHelper(n->getRight());
    }
}
void BinarySearchTree::displayPostorderHelper(Node* n){
    if(n != nullptr){
        displayInorderHelper(n->getLeft());
        displayInorderHelper(n->getRight());
        cout << n->getData() << endl;
    }
}

int BinarySearchTree::findMin(){
    if(root->getLeft() == nullptr){
        return root->getData();
    }
    else{
        return findMinNode(root)->getData();
    }
}

Node* BinarySearchTree::findMinNode(Node* n){
    if(n == nullptr){
        return nullptr;
    }
    Node* minNode = n;
    Node* leftMin = findMinNode(n->getLeft());

    if(leftMin != nullptr && leftMin->getData() < minNode->getData()){
        minNode = leftMin;
    }
    return minNode;
}

int BinarySearchTree::findMax(){
    if(root->getRight() == nullptr){
        return root->getData();
    }
    else{
        return findMaxNode(root)->getData();
    }
}

Node* BinarySearchTree::findMaxNode(Node* n){
    if(n == nullptr){
        return nullptr;
    }
    Node* maxNode = n;
    Node* rightMax = findMaxNode(n->getRight());

    if(rightMax != nullptr && rightMax->getData() > maxNode->getData()){
        maxNode = rightMax;
    }
    return maxNode;
}

void BinarySearchTree::balanceTree(){
    
}

void BinarySearchTree::saveTree(string){

}
void BinarySearchTree::saveTreeHelper(Node*, ofstream&){
    
}
    
int BinarySearchTree::countItems(){
    return countHelper(root);
}

int BinarySearchTree::countHelper(Node* node){
    if(node == nullptr){
        return 0;
    }
    return 1+ countHelper(node->getLeft()) + countHelper(node->getRight());
}