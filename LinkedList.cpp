#include "LinkedList.h"
using namespace std;

LinkedList::LinkedList()
{
}
void LinkedList::Add(Node *N)
{
	if (p == NULL)
	{
		p = N;
	}
	else
	{
		x = p;
		while(x->next != NULL)
		{
			if(N->value == x->value)
			{
				cout << "This value already exists!!" << endl;
				x->occer++;
				return;
			}
			x = x->next;
		}
		x->next = N;
	}
}
Node LinkedList::Remove(int num)
{
	if (num == p->value)
	{
		p = p->next;
		x=p;
	}
	else
	{
		bool an = 1;
		Node *s = new Node;
		s = p;
		x = p->next;
		while(x != NULL)
		{
			if(num == x->value)
			{
				s->next = x->next;
				return *x;
			}
			else
			{
				s = s->next;
				x = x->next;
			}
		}
	}
	cout << "This value does not exist!!"<<endl;
}
void LinkedList::Print()
{
	x=p;
	while(x != NULL)
	{
		cout << "The value " << x->value << " exists " << x->occer << " time/s."<<endl;
		x = x->next;
	}
}
int LinkedList::getSum()
{
	sum = 0;
	x = p;
	while(x != NULL)
	{
		sum += x->value;
		x = x->next;
	}	
	return sum;
}
void LinkedList::Vec2LL(Node *N)
{
	x = p;
	while(x != NULL)
	{
		if(N->value == x->value)
		{	
			x->occer++;
			return;
		}
		x = x->next;
	}
	Add(N);
}
