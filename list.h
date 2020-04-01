#ifndef LIST_H
#define LIST_H

template <class type>
class List {
	struct Node {
		type data;
		Node *next;
	};

	Node * head;
	Node * tail;
	Node * curr;
	Node * temp;

	bool isEmpty();

public:
	List(int data=0);
	void addNode(int data);
	void removeNode(int data);
	void printList();
};

#endif