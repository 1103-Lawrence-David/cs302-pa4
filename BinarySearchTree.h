#include "Node.h"
#ifndef BINARYSEARCHTREE_H
#define BINARYSEARCHTREE_H
#include <fstream>


class BinarySearchTree{
    Node* root;
    Node* deleteHelper(Node*, int);
    void displayInorderHelper(Node*);
    void displayPreorderHelper(Node*);
    void displayPostorderHelper(Node*);
    void saveTreeHelper(Node*, ofstream&);
    int countHelper(Node* node);
    Node* insertHelper(Node* n, int val);
    bool searchHelper(Node*, int);
    public:
        BinarySearchTree();

        //insert seems to be working
        void insert(int);

        //search seems to be working
        bool search(int); 

        //seems to work properly
        bool deleteValue(int);
        
        
        //all displays working properly
        void displayInorder();
        void displayPreorder();
        void displayPostorder();

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
        
        //works well enough
        int countItems();
};
#endif
