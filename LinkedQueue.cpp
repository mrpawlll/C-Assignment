
#include<iostream>
#include<string>
#include<cstring>
using namespace std;

#include "Node.cpp" 

class LinkedQueue {
	Node* front;
	Node* rear;
public:
	//Default Constructor
	LinkedQueue()
	{
		front = NULL;
		rear = NULL;
	}

	bool  isEmpty()
	{
		return (front == NULL || rear == NULL);

	}

	//Put element into Queue
	void  enQueue(int d)
	{
		Node* t = new Node(d);
		if (isEmpty())
		{

			front = t;
			rear = t;
		}
		else
		{
			rear->next = t;
			rear = t;

		}

	}

	//get element from Queue
	int  deQueue()
	{
		if (isEmpty())

			exit(1);
		Node* t = front;
		int d = front->data;
		front = front->next;
		if (front == NULL)
			rear = NULL;
		delete t;
		return d;
	}

	//Display all elements in a Queue
	void displayQueue() {

		if (isEmpty()) {
			cout << "Queue Empty \n";

		}
		else {
			
			Node* temp = front;
			while (temp!=rear) {
				cout <<"RM"<< temp->data << " , ";
				temp = temp->next;
			}
			cout <<" RM " << rear->data << " ";
			cout << endl;
			
		}

	}

	//Default destructor
	 ~LinkedQueue()
	{
		while (!isEmpty())
			deQueue();
	}

};


