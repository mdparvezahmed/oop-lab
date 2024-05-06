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

class MyDerived : public MyBase
{
public:
    int y;
    MyDerived() : MyBase(0)
    {
        y = 0;
        cout << "constructing in MyDerived y= 0 \n";
    }
    MyDerived(int a): MyBase(a){
        y = 0;
    }
    MyDerived(int a, int b):MyBase(a){
        cout<<"constructing in MyDerived y= b \n";
        y = b;
    }
    ~MyDerived(){
        cout<<"discructing..."<<endl;
    };
    void show(){
        cout<<x<<endl<<y<<endl;
    }
};



int main(){

    MyDerived l1;
    MyDerived l2(5);
    MyDerived l3(6, 7);
    l3.show();

    return 0;
}