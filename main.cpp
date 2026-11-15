#include "BinarySearchTree.h"

void buildUnsort(BinarySearchTree&);
void buildBase(BinarySearchTree&);
//For the love of god before the end redo the tests to be formatted nicely
int main(){
    string s = "test_out.txt";
    //Build trees:
    BinarySearchTree b,b2;
    buildBase(b);
    buildUnsort(b2);

    //search test (successful and unsuccessful)
    cout << "Successful search (should say 1): " << b.search(1) << endl;
    cout << "Unuccessful search (should say 0): " << b.search(2) << endl << endl;
    
    //ordered display on a skewed tree
    cout << "In order: ";
    b.displayInorder();
    cout << endl << "Post order: ";
    b.displayPostorder();
    cout << endl << "Pre order: ";
    b.displayPreorder();
    cout << endl << endl;

    //tests for find, and count
    cout << "Minimum number (should be 1): " << b.findMin() << endl; //due to the way this functions, this also tests findMinNode()
    cout << "Minimum number (should be 5): " << b.findMax() << endl; //due to the way this functions, this also tests findMaxNode()
    cout << "Counted items (should be 4): " << b.countItems() << endl << endl;

    //Tests for deleting values, including ones that do not exist
    cout << "Deleted item (expected output: 0): " << b.deleteValue(2) << endl;
    cout << "Count items after failed deletion (expected output: 4) : " << b.countItems() << endl;
    cout << "Deleted itew (expected output: 1): " << b.deleteValue(4) << endl;
    cout << "Count items after successful deletion (expected output: 3): " << b.countItems() << endl;
    cout << "In Order display after deletion: ";
    b.displayInorder();
    cout << endl << endl;

    //Tests on an unbalanced tree (all of the values are right leaning)
    cout << "unsorted unbalanced bst:" << endl << "In order: ";
    b2.displayInorder();
    cout << endl << "Post order: ";
    b2.displayPostorder();
    cout << endl << "Pre order: ";
    b2.displayPreorder();
    b2.balanceTree();

    cout << endl << "sorted:" << endl << "In order: ";
    b2.displayInorder();
    cout << endl << "Post order: ";
    b2.displayPostorder();
    cout << endl << "Pre order: ";
    b2.displayPreorder();
    cout << endl << endl;

  //outputs to match and check with file:
    cout << "Pre order of b2 (to check against file \"test_out.txt\"): ";
    b2.displayPreorder();
    cout << endl << "Pre order of b (to check against file \"test_out.txt\"): ";
    b.displayPreorder();
    cout << endl;
    b2.saveTree(s);
    b.saveTree(s);
    cout << "All tests executed successfully. Program will now end." << endl;
    return 0;
}

void buildUnsort(BinarySearchTree& b3){
    b3.insert(1);
    b3.insert(2);
    b3.insert(3);
    b3.insert(4);
    b3.insert(5);
    b3.insert(6);
    b3.insert(7);
}
void buildBase(BinarySearchTree& b){
    b.insert(4);
    b.insert(5);
    b.insert(3);
    b.insert(1);
}