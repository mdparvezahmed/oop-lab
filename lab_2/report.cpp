#include <iostream>
#define MAX_SIZE 1000

using namespace std;

class Stack
{

    int data[MAX_SIZE];
    int top;

public:
    void initialize();
    void push(int value);
    void pop();
    void display();
};
// initializing the stack.
void Stack::initialize() { top = -1; }

// pusing element in stack.
void Stack::push(int value)
{

    if (top < MAX_SIZE - 1)
    {
        data[++top] = value;
    }
}
// pop from the stack.
void Stack::pop()
{
    if (top >= 0)
    {
        --top;
    }
}
// display all Stack Status.
void Stack::display()
{

    if (top >= 0)
    {
        cout << "All Elements: ";

        for (int i = 0; i <= top; ++i)
        {
            cout << data[i] << " ";
        }
        cout << endl;
    }

    else
    {
        cout << "Stack is empty." << endl;
    }
    if (top >= MAX_SIZE - 1)
    {
        cout << "Stack Overflow" << endl;
    }
}

int main()
{
    int num, sNum;
    Stack myStk;
    myStk.initialize();

    while (1)
    {
        cout << "\n                   Status                    " << endl;
        cout << "---------------------------------------------" << endl;
        myStk.display();
        cout << "---------------------------------------------" << endl;
        cout << "1.Push" << endl
             << "2.Pop" << endl;
        cout << "Press '1' for pusing element in the stack and '2' for pop" << endl
             << ">>";
        cin >> sNum;
        switch (sNum)
        {
        case 1:
            cout << "Enter the element:\n>>";
            cin >> num;
            myStk.push(num);
            break;
        case 2:
            myStk.pop();
            break;
        }
        
    }
    return 0;
}