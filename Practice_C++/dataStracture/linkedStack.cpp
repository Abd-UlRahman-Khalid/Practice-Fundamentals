#include <iostream>
using namespace std;

template <class t>
class stack
{
private:
    struct node
    {
        t item;
        node *next;
    };
    node *top, *cur;

public:
    stack()
    {
        top = NULL;
    }
    bool isEmpty()
    {
        return top == NULL; // if top is still null so,the stack is empty
    }
    void push(t newItem)
    {
        node *newPointer = new node; // Store place in the space for the new item
        if (newPointer == NULL)
        {
            cout << "Stack Push Connot Allocate Memory";
        }
        else
        {
            newPointer->item = newItem; // store the new item
            newPointer->next = top;     // link the next pointer with the previus item
            top = newPointer;           // shift the top pointer to the new item
        }
    }

    void pop()
    {
        if (isEmpty())
        {
            cout << "Stack empty on pop";
        }
        else
        {
            node *temp = top;
            // temp = top;
            top = top->next;
            temp->next = NULL;
            delete temp;
        }
    }
    void pop(t &stackTop)
    {
        if (isEmpty())
        {
            cout << "Stack empty on pop";
        }
        else
        {
            stackTop = top->item;
            node *temp = new node;
            temp = top;
            top = top->next;
            temp = temp->next = NULL;
            delete temp;
        }
    }
    void getTop(t &stackTop)
    {
        if (isEmpty())
        {
            cout << "Stack empty on getTop";
        }
        else
        {
            stackTop = top->item;
        }
        cout << stackTop << endl;
    }
    void display()
    {
        cur = top;
        cout << "\nItems in the stack : ";
        cout << "[ ";
        while (cur != NULL)
        {
            cout << cur->item << " ";
            cur = cur->next;
        }
        cout << " ]\n";
    }
};
int main()
{
    stack<int> s;
    s.push(5);
    s.push(10);
    s.push(20);
    s.display();
    s.pop();
    s.display();
    int y = 0;
    s.getTop(y);
}