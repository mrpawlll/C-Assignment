
#include <iostream>
using namespace std;


class Queue{
    int *queue;
    int n ;
    int front ;
    int rear ;
    
public :
    //Constructors
    Queue()
    {
        n = 20;
        queue = new int[n];
        front = -1;
        rear = -1;
    }

    Queue(int num)
    {
        n = num;
        queue = new int[n];
        front = -1;
        rear = -1;
    }


    //Insert Value
    void insert(int num) {
        if (rear == n - 1)
            cout << "Queue Overflow" << endl;
        else {
            front = 0;
            rear++;
            queue[rear] = num;
            cout << "Transaction RM " << num << " Inserted" << endl;

        }
    }

    //Delete Value
    void Delete() {
        if (front == -1) {
            cout << "Queue Underflow ";
            return;
        }
        else {
            cout << "Transaction deleted from queue is : " << queue[front] << endl;
            front++;;
        }
    }

    //Display all Elemnts of Queue
    void Display_Queue() {
        if (front == -1)
            cout << "Queue is empty" << endl;
        else {
            cout << "Transactions are : ";
            for (int i = front; i <= rear; i++)
                cout << "RM" << queue[i] << " ";
            cout << endl;
        }
    }

};

//int main() {
//    int ch;
//    cout << "1) insertion element to the queue" << endl;
//    cout << "2) Delete element from queue" << endl;
//    cout << "3) Display all the elements of queue" << endl;
//    cout << "4) Exit" << endl;
//    do {
//        cout << "Enter your choice : " << endl;
//        cin >> ch;
//        switch (ch) {
//        case 1: Queue_insertion();
//            break;
//        case 2: Delete();
//            break;
//        case 3: Display_Queue();
//            break;
//        case 4: cout << "Exit" << endl;
//            break;
//        default: cout << "Invalid choice" << endl;
//        }
//    } while (ch != 4);
//    return 0;
//}


