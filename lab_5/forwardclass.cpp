#include<iostream>
using namespace std;

class YourClass; // a forward declaration

class MyClass
{
    int a; // private member
public:
    MyClass(int n)
    {
        a = n;
    }
    int compare(YourClass obj); // Declaration using YourClass as a parameter
};

class YourClass
{
    int a; // private member
public:
    YourClass(int n)
    {
        a = n;
    }
    friend int MyClass::compare(YourClass obj); // Allowing MyClass to access YourClass private members
};

// Definition of the compare function
int MyClass::compare(YourClass obj)
{
    return a - obj.a;
}

int main() // Correcting the function signature to int main()
{
    MyClass o1(10);
    YourClass o2(5);
    int n = o1.compare(o2); // n = 5
    cout << "Result: " << n << endl; // Adding a print statement to see the result
    return 0; // Adding a return statement for int main()
}
