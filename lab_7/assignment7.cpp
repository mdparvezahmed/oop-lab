#include <iostream>
using namespace std;
class MyBase
{
public:
    int x;
    MyBase(int m)
    {

        x = m;
        cout << "Constructing in MyBase x = m; \n";
    }
};

class derived : public MyBase
{
public:
    int y, yx;
    derived() : MyBase(0)
    {

        y = 0;
        cout << "Constructing in derived y = 0; \n";
    }
    derived(int a) : MyBase(a)
    {

        y = 0;
    }

    derived(int a, int b) : MyBase(a)
    {
        cout << "Constructing in derived: y = b; \n";
        y = b;
    }
    derived(int a, int ab, int b) : MyBase(a)
    {
        cout << "Constructing in derived: y = b; & yx = c; \n";
        y = ab;
        yx = b;
    }
};

int main()
{
    cout<<"First declearation:\n";
    derived ob1(3, 4, 5);
    cout<<"\nSecond declearation:\n";
    
    derived ob2;
    cout<<"\nThird declearation:\n";

    derived ob3(2, 3);
}