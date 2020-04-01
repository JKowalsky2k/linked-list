#include <iostream>
#include "list.h"

List::List(int data) {
	head = new Node;
	head->data = data;
	head->next = nullptr;

	tail = head;
	curr = nullptr;
	temp = nullptr;
}

~List::List() {
	//usuwanie linked listy
}

void List::isEmpty() {

}

void List::addNode(int data) {
	Node * new_node = new Node;
	new_node->data = data;
	new_node->next = nullptr;
	if (head->next != nullptr) {
		curr = head;
		while (curr->next != nullptr) {
			curr = curr->next;
		}
		curr->next = new_node;
	}
	else 
		head->next = new_node;
}

void removeNode() {

}

void List::printList() {
	std::cout << "=======================\n";
	curr = head;
	while (curr != nullptr) {
		std::cout << "Data: " << curr->data << "\n";
		curr = curr->next;
	}
	std::cout << "=======================\n";
}