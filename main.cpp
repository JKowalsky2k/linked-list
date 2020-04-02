#include <iostream>
#include "list.h"

int main() {
	List < char > l('x');
	l.addNode('a');
	l.addNode('b');
	l.printList();
	List < int > l2(0);
	l2.addNode(10);
	l2.addNode(20);
	l2.printList();
	return 0;
}