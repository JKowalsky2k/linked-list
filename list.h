#ifndef LIST_H
#define LIST_H

template <typename T>
class List {
	struct Node {
		T data;
		Node *next;
	};

	Node * head;
	Node * tail;
	Node * curr;
	Node * temp;

//	bool isEmpty();

public:
	List(T data) {
		head = new Node;
		head->next = nullptr;
		head->data = data;
		tail = head;
		curr = nullptr;
		temp = nullptr;
	}

	//~List();
	void addNode(T data) {
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

	void printList() {
		std::cout << "=======================\n";
		curr = head;
		while (curr != nullptr) {
			std::cout << "Data: " << curr->data << "\n";
			curr = curr->next;
		}
		std::cout << "=======================\n";
	}
};
#endif