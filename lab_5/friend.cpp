#include<iostream>
using namespace std;

class myclass{
    int a;
    public:
    myclass(int n){
        a = n;
    }
    friend void fun(myclass obj);
    friend int main();
};
void fun(myclass obj){
    cout<<obj.a<<endl;
}

int main(){
    myclass ol(10);
    ol.a = 29;
    fun(ol);
}
