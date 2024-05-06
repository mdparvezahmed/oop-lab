#include <iostream>
using namespace std;

class stack
{

public:
    int stk[5];
    int top = -1;

    void push(int num);
    void pop();
};
void stack::push(int num)
{
    if (top == 4)
    {
        cout << "overflow" << endl;
    }
    else
    {
        stk[++top] = num;
    }
}
void stack::pop()
{
    if (top == -1)
    {
        cout << "Empty" << endl;
    }
    else
    {
        top--;
    }
}

int main()
{
    stack stck;
    int num[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> num[i];
        stck.push(num[i]);
    }

    for (int j = 0; j < 5; j++)
    {
        cout << stck.stk[j] << " ";
    }
    cout << "\n";

    stck.pop();
    stck.pop();
    stck.pop();
    stck.pop();
    // stck.pop();
    // stck.pop();

    for (int j = 0; j < stck.top; j++)
    {
        cout << stck.stk[j] << " ";
    }
}