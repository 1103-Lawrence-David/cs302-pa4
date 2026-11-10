execute: main.o BinarySearchTree.o Node.o
	g++ -o execute main.o BinarySearchTree.o Node.o

main.o: BinarySearchTree.h main.cpp
	g++ -c main.cpp

BinarySearchTree.o: BinarySearchTree.h BinarySearchTree.cpp Node.h
	g++ -c BinarySearchTree.cpp

Node.o: Node.h Node.cpp
	g++ -c Node.cpp

make clean:
	rm *.o execute