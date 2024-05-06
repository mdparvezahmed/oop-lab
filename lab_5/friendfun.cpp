#include<iostream>
using namespace std;

class Myclass{
    int a;
    public:
    friend int fun(Myclass ob);
};

int fun(Myclass ob){
    ob.a = 100;
    
}