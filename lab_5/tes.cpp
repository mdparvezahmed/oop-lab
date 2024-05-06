#include<iostream>
using namespace std;

class myclass{
    int i;
    public:
    void set_i(int n){
        i = n;

    }
    int get_i(){
        return i;
    }
};
myclass fun();


int main(){
    myclass o;
    o=fun();
    cout<<o.get_i()<<endl;
    return 0;
}

myclass fun(){
    myclass x;
    x.set_i(19);
    return x;
}