
#include <iostream>
#include "Node.cpp" 

using namespace std;


class linkedlist
{
private:
    Node* head;
public:
    int length;
   
    //Constructor and Destructor
     linkedlist()
    {
        this->length = 0;
        this->head = NULL;
    }

     ~linkedlist()
    {
        cout << "this transaction is deleted" << "\n";
    }


     //Creating a single Add at Position fucntion to call when ever we need to add a value
    void  AddAtPos(int pos, int n)
    {
        Node* pre = new Node();
        Node* cur = new Node();
        Node* temp = new Node();

        if (pos == 0)
        {
            temp->data = n;
            temp->next = this->head;
            this->head = temp;
        }
        else
        {
            cur = this->head;
            for (int i = 0; i < pos; i++)
            {
                pre = cur;
                cur = cur->next;
            }
            temp->data = n;
            temp->next = cur;
            pre->next = temp;
        }
        this->length++;
    }

    void  add_first(int n)
    {
        AddAtPos(0, n);
    }

    void  add_last(int n)
    {
        AddAtPos(this->length, n);
    }


    //Creating a single Delete at Pos fucntion to call when ever we need to Delete a value

    void  DeleteAtPos(int pos)
    {
        Node* pre = new Node();
        Node* cur = new Node();
        cur = this->head;

        if (pos == 0)
        {
            pre = this->head;
            head = head->next;
        }
        else
        {
            for (int i = 0; i < pos; i++)
            {
                pre = cur;
                cur = cur->next;
            }
            pre->next = cur->next;
        }
        this->length--;
    }

    void  delete_first()
    {
        DeleteAtPos(0);
    }

    void  delete_last()
    {
        DeleteAtPos(this->length - 1);
    }


    //Display Linked List
   
    void  display_all()
    {
        Node* new_Node = this->head;
        int i = 1;
        while (new_Node)
        {
            cout << i << ":RM " << new_Node->data << "\n";
            new_Node = new_Node->next;
            i++;
        }
    }
    
};