#include <iostream>
#include <vector>
#include "LinkedList.cpp"
using namespace std;

int insertAfter(int first, int second, vector <int> &Vec)
{
	int count = 0;
	for (int i = 0; i< Vec.size(); i++)
	{
		if (first == Vec.at(i))
		{
			count++;
			Vec.insert(Vec.begin() + (i+1), second);
		}
	}
	return count;
}
main()
{
	LinkedList LL;
	int N, k, x;
	Node *no = new Node;
	cout << "Enter the number of integers : ";
	cin >> N;
	vector <int> Vec;
	for (int i = 0; i< N; i++)
	{
		cout << "Enter the "<< (i+1) << " integer : ";
		cin >> x;
		Vec.push_back(x);
	}
	cout << "Enter the integer you want to check its occurrence : ";
	cin >> k;
	cout << "Enter the integer you want to add to the vector : ";
	cin >> x;
	x = insertAfter(k, x, Vec);
	cout << "The integer " << k << " occurred " << x << " time/s." << endl << "The new vector after inserting the value : " << endl;
	N = Vec.size();
	for(int i=0; i<N; i++)
	{
		cout << Vec.at(i) << endl;
	}
	cout << endl;
	for(int i=0; i<N; i++)
	{
		Node *k = new Node;
		k->value = Vec[i];
		LL.Vec2LL(k);
	}
	LL.Print();
	N = LL.getSum();
	cout << "The sum of the nodes = " << N << endl;
	cout << "Enter the value you want add : ";
	cin >> x;
	no->value = x;
	LL.Add(no);
	LL.Print();
	cout << "Enter the value you want remove : ";
	cin >> x;
	LL.Remove(x);
	LL.Print();
	N = LL.getSum();
	cout << "The sum of the nodes = " << N << endl;
	return 0;
}
