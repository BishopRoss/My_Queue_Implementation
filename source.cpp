/*******************************
*  Week 2 lesson:              *
*  a simple Queue class		   *
*  Part 5 of week 3 lab		   * 
*******************************/




#include "Queue.h"
#include <iostream>

using namespace std;

int main()
{
	Queue q;

	q.dequeue();	//test for exception
	q.getFront();	//test for exception

	cout << "Insertion of 10 characters in q" << endl;
	for (int i = 0; i < q.getSize(); i++)
	{
		char x = 32 + rand() % 95;
		cout << x << endl;
		q.enqueue(x);
	}

	q.enqueue('a');	//test for exception
	q.enqueue('b');	//test for exception
	q.enqueue('c');	//test for exception
	q.enqueue('d');	//test for exception

	cout << endl
		<< "Displaying and deleting elements from q" << endl;
	while (!q.isEmpty())
	{
		cout << "Item at the front: " << q.getFront() << endl;
		q.dequeue();
	}

	return 0;
}
