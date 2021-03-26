#include <string>
#include <iostream>

using namespace std;



class Stack {

    int top;
    int c;
    int* s;

public:

    //Constructors
    Stack() {

        this->c = 20;
        s = new int[c];

        top = -1;

    }

    Stack(int c) {
        if (c <= 0)
            throw string("Stack's capacity must be positive");
        s = new int[c];
        this->c = c;
        top = -1;
    }


    //Insert A value
    void push(int value) {
        if (top == c)
            throw string("Stack is overflowed");
        top++;
        s[top] = value;
    }

    //Get Value without popping
    int peek() {
        if (top == -1)
            throw string("Stack is empty");
        return s[top];
    }

    //Delete Value
    void pop() {
        if (top == -1)
            throw string("Stack is empty");
        top--;
    }

    bool isEmpty() {
        return (top == -1);
    }

    //Display all elements of Stack
    void displayStack()
    {
        if (isEmpty())
            cout << "Stack is Empty"<<endl;
        else
        {
            int index = top;
            while (index!=-1)
            {
                cout << "RM" << s[index] << " , ";
                index--;
            }
            cout << endl;
        }
    }

    ~Stack() {
        delete[] s;
    }

};