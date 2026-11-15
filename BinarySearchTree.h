#include "Node.h"
#ifndef BINARYSEARCHTREE_H
#define BINARYSEARCHTREE_H
#include <fstream>


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

        //works
        void treeToArray(Node*, int&, int*);
        void balanceTree();
        Node* buildTree(int*, int, int);

        //works
        void saveTree(string);
        void saveTreeHelper(Node*, ofstream&);
        
        //works well enough
        int countItems();
        int countHelper(Node* node);

};
#endif
