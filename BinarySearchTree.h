#include "Node.h"
using namespace std;

#ifndef BINARYSEARCHTREE_H
#define BINARYSEARCHTREE_H

class BinarySearchTree{
    
    public:
        BinarySearchTree();

        void insert(int);
        bool search(int value);
        bool deleteValue(int);
        
        void displayInorder();
        void displayPreorder();
        void displayPostorder();

        int findMin();
        int findMax();

        void balanceTree();
        void saveTree(string);
        int countItems();

};
#endif
