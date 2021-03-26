#include <iostream>
using namespace std;

#include "Node.cpp" 


class LinkedStack {
    // top pointer to keep track of the top of the stack
    Node* top = NULL;

public:
    bool isempty()
    {
        if (top == NULL)
            return true; else
            return false;
    }

    //insert an element in stack
    void push(int value)
    {
        Node* ptr = new Node();
        ptr->data = value;
        ptr->next = top;
        top = ptr;
    }

    // delete an element from the stack
    void pop()
    {
        if (isempty())
            cout << "Stack is Empty";
        else
        {
            Node* ptr = top;
            top = top->next;
            delete(ptr);
        }
    }

    // show the element at the top of the stack
    void showTop()
    {
        if (isempty())
            cout << "Stack is Empty";
        else
            cout << "Latest transaction: RM " << top->data<<endl;
    }

    //  Display the stack
    void displayStack()
    {
        if (isempty())
            cout << "Stack is Empty";
        else
        {
            Node* temp = top;
            while (temp != NULL)
            {
                cout <<"RM"<< temp->data << " ";
                temp = temp->next;
            }
            cout << endl;
        }
    }
};


//// Main function
//int main()
//{
//
//    int choice, flag = 1, value;
//
//    //Menu Driven Program using Switch
//    while (flag == 1)
//    {
//        cout << "\n1.Push 2.Pop 3.showTop 4.displayStack 5.exit\n";
//        cin >> choice;
//        switch (choice)
//        {
//        case 1: cout << "Enter Value:\n";
//            cin >> value;
//            push(value);
//            break;
//        case 2: pop();
//            break;
//        case 3: showTop();
//            break;
//        case 4: displayStack();
//            break;
//        case 5: flag = 0;
//            break;
//        }
//    }
//
//    return 0;
//}




