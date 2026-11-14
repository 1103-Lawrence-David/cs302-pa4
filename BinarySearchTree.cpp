#include "BinarySearchTree.h"

BinarySearchTree::BinarySearchTree(){
    root = nullptr;
}

void BinarySearchTree::insert(int){

}
Node* BinarySearchTree::insertHelper(Node* n, int val){

}

bool BinarySearchTree::search(int val){
    return searchHelper(root, val);
}

bool BinarySearchTree::searchHelper(Node* root, int value){
    if(root == nullptr){
        return false;
    }
    if(root->getData() == value){
        return true;
    }
    if(root->getData() > value){
        return searchHelper(root->getLeft(), value);
    }
    if(root->getData() < value){
        return searchHelper(root->getRight(), value);
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

Node* BinarySearchTree::deleteHelper(Node* root, int value){
    if(root == nullptr){
        return nullptr;
    }
    if(root->getData() == value){
        if(root->getLeft() == nullptr && root->getRight() == nullptr){
            delete root;
            return nullptr;
        }
        if(root->getLeft() == nullptr){
            Node* temp = root->getRight();
            delete root;
            return temp;
        }
        if(root->getRight() == nullptr){
            Node* temp = root->getLeft();
            delete root;
            return temp;
        }
        Node* successor = findMinNode(root->getRight());
        root->setData(successor->getData());
        root->setRight(deleteHelper(root->getRight(), successor->getData()));
    }
    if(root->getData() > value){
        return deleteHelper(root->getLeft(), value);
    }
    if(root->getData() < value){
        return deleteHelper(root->getRight(), value);
    }
    return root;
}
        
void BinarySearchTree::displayInorder(){

}

void BinarySearchTree::displayPreorder(){

}

void BinarySearchTree::displayPostorder(){

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
    if(root == nullptr){
        return nullptr;
    }
    Node* minNode = root;
    Node* leftMin = findMinNode(root->getLeft());

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

Node* BinarySearchTree::findMaxNode(Node*){
    if(root == nullptr){
        return nullptr;
    }
    Node* minNode = root;
    Node* rightMin = findMinNode(root->getRight());

    if(rightMin != nullptr && rightMin->getData() < minNode->getData()){
        minNode = rightMin;
    }
    return minNode;
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