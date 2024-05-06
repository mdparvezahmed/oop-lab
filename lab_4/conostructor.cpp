#include <iostream>

using namespace std;

class Employee
{
public:
    int id;
    string name;
    float salary;
    Employee(const Employee& x){
        id = x.id;
        name = x.name;
        salary= x.salary;
    }
    Employee(){
        id = 0;
        name = "name";
        salary = 0.00;
    }

    Employee(int i, string n, float s)
    {
        id = i;
        name =n;
        salary = s;
    }
    
    void display(){
        cout<<id<<" "<<name<<" "<<salary<<endl;
    }
    ~Employee(){
        cout<<"Destructor called."<<endl;
    }
};

int main()
{
    

    Employee eq(574, "hasan", 2555.56);
    Employee eq2 = Employee(5234, "jack", 3412.53);
    eq.display();
    eq2.display();

    Employee ew3(eq2);
    ew3.display();
    
    return 0;
}