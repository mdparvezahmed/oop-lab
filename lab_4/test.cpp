#include<iostream>

using namespace std;

class emp{
    public:
    int id;
    string name;

    emp(emp &x){
        id = x.id;
        name = x.name;

    }
    emp(){
        id = 100;
        name = "hasan";
    }
    void display(){
        cout<<id<<endl<<name<<endl;
    }


};



int main(){
    emp jkl;
    emp hello(jkl);

    jkl.display();

    cout<<endl<<"2nd display"<<endl<<endl;
    hello.display();



    return 0;
}