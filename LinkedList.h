#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include <iostream>
#include <vector>

struct Node
{
	int value;
	int occer = 1;
	Node *next = NULL;
};

class LinkedList
{
	public:
		LinkedList();
		void Add(Node*);
		Node Remove(int);
		void Print();
		void Vec2LL(Node*);
		int getSum();
	private:
		Node *p = NULL;
		Node *x = new Node;
		int sum = 0;
};
#endif
