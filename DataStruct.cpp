#pragma once
#include <iostream>
#include "LinkedQueue.cpp"
#include "LinkedList.cpp"
#include "Queue.cpp"
#include "Stack.cpp"
#include "LinkedStack.cpp"

using namespace std;


void check_LinkedList() {


	string breakline = "-----------------------------";
	char choice;
	linkedlist* sll = new linkedlist();

	cout << "\n///////////////////////////////////////LINKED LIST CHECK/////////////////////////////////////////////\n";


	do {
		cout << breakline << endl;
		cout << " 1. Add amount" << endl;
		cout << " 2. Delete amount from latest transaction" << endl;
		cout << " 3. Delete amount from first transaction" << endl;
		cout << " 4. Display all transaction" << endl;
		cout << " 5. Exit or else press q" << endl;
		cout << breakline << endl;
		cin >> choice;

		switch (choice) {
		case '1':
			int el;
			cout << "Enter amount paid : RM "; cin >> el;
			sll->add_first(el);
			break;

		case '2':
			sll->delete_first();
			break;

		case '3':
			sll->delete_last();
			break;

		case '4':
			sll->display_all();
			break;

		case '5':
			return;
			break;

		default:
			cout << "Invalid selection" << endl;
			break;
		}

	} while (choice != 'q');




}

void check_LinkedStack() {

	string breakline = "-----------------------------";
	char choice;

	LinkedStack* stack2 = new LinkedStack();

	cout << "\n///////////////////////////////////////LinkedStack Check/////////////////////////////////////////////\n";


	do {
		cout << breakline << endl;
		cout << " 1. Add amount " << endl;
		cout << " 2. Delete latest transaction" << endl;
		cout << " 3. Show last transaction" << endl;
		cout << " 4. Display all transaction" << endl;
		cout << " 5. Exit or else press q" << endl;
		cout << breakline << endl;
		cin >> choice;

		switch (choice) {		case '1':
			int el;
			cout << "Enter amount : RM "; cin >> el;
			stack2->push(el);
			break;

		case '2':
			stack2->pop();
			break;

		case '3':
			stack2->showTop();
			break;

		case '4':
			stack2->displayStack();
			break;

		case '5':
			return;
			break;

		default:
			cout << "Invalid selection" << endl;
			break;
		}

	} while (choice != 'q');



}

void check_LinkedQueue() {

	string breakline = "-----------------------------";
	char choice;

	cout << "\n ///////////////////////////////////////LinkedQueue Check/////////////////////////////////////////////\n";

	LinkedQueue* queue2 = new LinkedQueue();

	do {
		cout << endl << endl;
		cout << breakline << endl;
		cout << " 1. Add amount" << endl;
		cout << " 2. Delete first amount in queue" << endl;
		cout << " 3. Display all transaction" << endl;
		cout << " 4. Exit or else press q" << endl;
		cout << breakline << endl;
		cin >> choice;

		switch (choice) {
		case '1':
			int el;
			cout << "Enter amount : RM "; 
			cin >> el;
			queue2->enQueue(el);
			break;

		case '2':
			if (queue2->isEmpty()){
				cout << "Queue is empty"<< endl;
			}
			else {
				queue2->deQueue();
			}
			break;

		case '3':
			queue2->displayQueue();
			break;

		case '4':
			return;
			break;

		default:
			cout << "Invalid selection" << endl;
			break;
		}

	} while (choice != 'q');


}
void check_ArrayStack() {

	string breakline = "-----------------------------";
	char choice;

	cout << "\n///////////////////////////////////////Array-Stack Check/////////////////////////////////////////////\n";

	Stack* stack = new Stack();


	do {
		cout << breakline << endl;
		cout << " 1. Add amount" << endl;
		cout << " 2. Delete first transaction in the queue" << endl;
		cout << " 3. Show first transaction in the queue" << endl;
		cout << " 4. Display all transaction" << endl;
		cout << " 5. Exit or else press q" << endl;
		cout << breakline << endl;
		cin >> choice;

		switch (choice) {
		case '1':
			int el;
			cout << "Enter amount : RM "; cin >> el;
			stack->push(el);
			break;

		case '2':
			stack->pop();
			break;

		case '3':
			cout <<"RM"<< stack->peek() << endl;
			break;

		case '4':
			stack->displayStack();
			break;

		case '5':
			return;
			break;

		default:
			cout << "Invalid selection" << endl;
			break;
		}

	} while (choice != 'q');


}

void check_ArrayQueue() {


	string breakline = "-----------------------------";
	char choice;

	cout << "\n ///////////////////////////////////////Array-Queue Check/////////////////////////////////////////////\n";

	Queue* queue2 = new Queue();

	do {
		cout << breakline << endl;
		cout << " 1. Add amount " << endl;
		cout << " 2. Delete specific transaction" << endl;
		cout << " 3. Display all transaction" << endl;
		cout << " 4. Exit or else press q" << endl;
		cout << breakline << endl;
		cin >> choice;

		switch (choice) {
		case '1':
			int el;
			cout << "Enter amount : RM"; cin >> el;
			queue2->insert(el);
			break;

		case '2':
			queue2->Delete();
			break;

		case '3':
			queue2->Display_Queue();
			break;

		case '4':
			return;
			break;

		default:
			cout << "Invalid selection" << endl;
			break;
		}

	} while (choice != 'q');


}


int main() {

	string breakline = "-----------------------------";
	char choice;

	do {
		cout << breakline << "MAIN MENU" << breakline << endl;
		cout << " 1. Linked List" << endl;
		cout << " 2. Linked Stack" << endl;
		cout << " 3. Linked Queue" << endl;
		cout << " 4. Array Stack" << endl;
		cout << " 5. Array Queue" << endl;
		cout << breakline << endl;
		cin >> choice;

		switch (choice) {
		case '1':
			check_LinkedList();
			break;

		case '2':
			check_LinkedStack();
			break;

		case '3':
			check_LinkedQueue();
			break;

		case '4':
			check_ArrayStack();
			break;

		case '5':
			check_ArrayQueue();
			break;

		default:
			cout << "Invalid selection" << endl;
			break;
		}

	} while (choice != 'q');

	return 0;


}
