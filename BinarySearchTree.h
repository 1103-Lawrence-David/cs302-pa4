#include "Node.h"
#ifndef BINARYSEARCHTREE_H
#define BINARYSEARCHTREE_H


class BinarySearchTree{
    Node* root;
    
    public:
        BinarySearchTree();

        //insert seems to be working
        void insert(int);
        Node* insertHelper(Node* n, int val);

        //search seems to be working
        bool search(int); 
        bool searchHelper(Node*, int);

        //seems to work properly
        bool deleteValue(int);
        Node* deleteHelper(Node*, int);
        
        //all displays working properly
        void displayInorder();
        void displayPreorder();
        void displayPostorder();

        void displayInorderHelper(Node*);
        void displayPreorderHelper(Node*);
        void displayPostorderHelper(Node*);

        //works properly
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
