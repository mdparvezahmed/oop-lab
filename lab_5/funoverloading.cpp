#include<iostream>

using namespace std;

void add(float a, float b){
    cout<<"int result = "<<a-b<<endl;
}

void add(double a, double b){
    cout<<"double result = "<<a+b<<endl;
}

int main(){
    add(5.5, 7);
    add(10.0, 17.0);
    return 0;
}

//drawback of funtion overloading 
//ambegious error
