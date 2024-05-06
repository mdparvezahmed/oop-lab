#include<iostream>

using namespace std;

void add(int a , int b){
    cout<<"Sum: "<<a+b<<endl;
}

void add(int a, int b, int c){
    cout<<"sum: "<<a+b+c<<endl;
}
void add(double a, double b){
    cout<<"sum: "<<a+b<<endl;
}
int main(){
    add(2,3);
    add(5,2,5);
    add(3.5,1.5);
}