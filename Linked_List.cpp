/* Yonathan Arya Dhamma | 20215520001
   Jullius Celvin       | 20215520004
   Andre Surya          | 20215520002 */
   
#include <iostream>

using namespace std;

struct Node
{
    int data;
    struct Node *next;
};
struct Node *top = NULL;

void push(int val)
{
    struct Node *newnode = (struct Node *)malloc(sizeof(struct Node));

    //  if (newnode == 4)
    //  {
    //      cout << "Stack Overflow" << endl;
    //  }
    
    newnode->data = val;
    newnode->next = top;
    top = newnode;
}

void pop()
{
    if (top == NULL)
        cout << "Stack Underflow" << endl;
    else
    {
        cout << "The popped element is " << top->data << endl;
        top = top->next;
    }
}

void display()
{
    struct Node *ptr;
    if (top == NULL)
        cout << "stack is empty";
    else
    {
        ptr = top;
        cout << "Stack elements are: ";
        while (ptr != NULL)
        {
            cout << ptr->data << " ";
            ptr = ptr->next;
        }
    }
    cout << endl;
}

int main()
{
    system("cls");

    int ch, val;
    cout << "1) Push in stack" << endl;
    cout << "2) Pop from stack" << endl;
    cout << "3) Display stack" << endl;
    cout << "4) Exit" << endl;
    do
    {
        cout << "Enter choice: ";
        cin >> ch;
        switch (ch)
        {
        case 1:
        {
            // system("cls");
            cout << "Enter value to be pushed: ";
            cin >> val;
            push(val);
            break;
        }
        case 2:
        {
            // system("cls");
            pop();
            break;
        }
        case 3:
        {
            system("cls");
            display();
            break;
        }
        case 4:
        {
            system("cls");
            cout << "Exit" << endl;
            break;
        }
        default:
        {
            cout << "Invalid Choice" << endl;
        }
        }
    } while (ch != 4);
    return 0;
}