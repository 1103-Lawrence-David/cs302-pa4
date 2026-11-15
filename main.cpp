#include "BinarySearchTree.h"


//For the love of god before the end redo the tests to be formatted nicely
int main(){
    BinarySearchTree b;
    cout<< "succ" << endl;
    b.insert(4);
    b.insert(5);
    b.insert(3);
    b.insert(1);
    cout << b.search(1) << endl;
    b.displayInorder();
    cout << endl;
    b.displayPostorder();
    cout << endl;
    b.displayPreorder();
    cout << endl;

    cout << b.findMin() << endl;
    cout << b.findMax() << endl;
    cout << b.countItems() << endl;
    cout << b.deleteValue(2) << endl;
    cout << b.countItems() << endl;
    cout << b.deleteValue(4) << endl;
    cout << b.countItems() << endl;
    cout<< "succ" << endl;
    b.displayInorder();
    cout<< "succ" << endl;
    return 0;
}