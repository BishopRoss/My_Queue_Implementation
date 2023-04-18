/*******************************
*  Week 2 lesson:              *
*   a simple Queue class       *
*******************************/

#include <iostream>
#include "Queue.h"
using namespace std;
/*
* Constructor. Initializes the queue.
*/
Queue::Queue()
{
	front = 0;
	back = SIZE - 1;
	count = 0;
}

/*
* Determines whether the queue is empty.
*
* Returns true if the queue is empty, false otherwise.
*/
bool Queue::isEmpty()
{
	return count == 0;
}

/*
* Adds an element to the back of the queue.
*
* x: element to be added to the queue.
*/
void Queue::enqueue(char x)
{
	if (count >= SIZE)
	{
		cout << "ERROR: QUEUE IS FULL" << endl;
	}
	else 
	{
		back = (back + 1) % SIZE;
		list[back] = x;
		count++;
	}
	
}

/*
* Removes the element in the front of the queue.
*/
void Queue::dequeue()
{
	if (!isEmpty()) 
	{
		front = (front + 1) % SIZE;
		count--;
	}
	else
	{
		cout << "ERROR: QUEUE IS EMPTY" << endl;
	}
	
}

/*
* Returns the element in the front of the queue. Does not remove it.
*/
char Queue::getFront()
{
	if (!isEmpty()) 
	{
		return list[front];
	}
	else
	{
		cout << "ERROR: QUEUE IS EMPTY" << endl;
	}
}

/*
* Returns the size of the queue.
*/
int Queue::getSize()
{
	return SIZE;
}