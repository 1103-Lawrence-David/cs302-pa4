#include "Node.h"
#ifndef BINARYSEARCHTREE_H
#define BINARYSEARCHTREE_H


class BinarySearchTree{
    Node* root;
    
    public:
        BinarySearchTree();

        void insert(int);
        Node* insertHelper(Node* n, int val);
        bool search(int); //iMPLEMENTED, MAY NEED TWEAKING
        bool searchHelper(Node*, int);
        bool deleteValue(int);
        Node* deleteHelper(Node*, int);
        
        void displayInorder();
        void displayPreorder();
        void displayPostorder();

        int findMin();
        Node* findMinNode(Node*);
        int findMax();
        Node* findMaxNode(Node*);


        void balanceTree();
        void saveTree(string);
        void saveTreeHelper(Node*, ofstream&);
        int countItems();
        int countHelper(Node* node);

};
#endif
