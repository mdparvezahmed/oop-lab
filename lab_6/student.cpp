#include <iostream>
using namespace std;

class Person
{
protected:
    double weight;
    double height;
    string sex;

public:
    void walk()
    {
        cout << "walking...." << endl;
    }
    void sit()
    {
        cout << "sitting..." << endl;
    }
};

class Student
{

protected:
    int ID;
    string First_name;
    string Last_name;
    string graduated;

public:
    void write(int id, string fname, string lname, string grad)
    {
        ID = id;
        First_name = fname;
        Last_name = lname;
        graduated = grad;
    }
    void display()
    {
        cout <<"Name: "<< First_name << " " << Last_name << endl;
        cout<<"ID: "<<ID<<endl;
        cout <<"graduated: " <<graduated << endl;
    }
};

class Gradstudent : public Person, public Student
{
    string under_gred_major;
    string under_gred_school;
    int year_graduated;

public:
    void write(string ugm, string ugs, int year, double weig, double hei, string xx, int id, string fname, string lname, string grad)
    {
        under_gred_major = ugm;
        under_gred_school = ugs;
        year_graduated = year;
        weight = weig;
        height = hei;
        sex = xx;
        Student::write(id, fname, lname, grad);
    }
    void display(){
        Student::display();
        cout<<"height: "<<height<<" feet"<<endl;
        cout<<"Weight: "<<weight<<" kg"<<endl;
        cout<<"sex: "<<sex<<endl;
        cout<<"Major: "<<under_gred_major<<endl;
        cout<<"School: "<<under_gred_school<<endl;
        cout<<"Passing Year: "<<year_graduated<<endl;
    }
};

int main(){
    Gradstudent gstu;

    gstu.write("comptuer", "DIU", 2025, 59.3, 5.5,"male", 234523, "Parvez","Ahmed", "done" );
    gstu.display();
    gstu.sit();
    gstu.walk();
}