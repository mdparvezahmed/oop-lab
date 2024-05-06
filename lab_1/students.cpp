#include <iostream>
using namespace std;
class student
{

    string name, adress, bloodGroup;
    int roll, reg, batch, age;
    double cgpa, marks, height;

public:
    void getData(string NAME, int ROLL, int REG, int BATCH, double MARKS, double CGPA, string BLOODGROUP, double HEIGHT, int AGE, string ADRESS);
    void showData();
};

void student::getData(string NAME, int ROLL, int REG, int BATCH, double MARKS, double CGPA, string BLOODGROUP, double HEIGHT, int AGE, string ADRESS)
{
    name = NAME;
    roll = roll;
    reg = REG;
    batch = BATCH;
    marks = MARKS;
    cgpa = CGPA;
    bloodGroup = BLOODGROUP;
    height = HEIGHT;
    age = AGE;
    adress = ADRESS;
}
void student::showData()
{
    cout << "Name: " << name << endl;
    cout << "Roll: " << roll << endl;
    cout << "Reg: " << reg << endl;
    cout << "Batch: " << batch << endl;
    cout << "Marks: " << marks << endl;
    cout << "CGPA: " << cgpa << endl;
    cout << "BGroup: " << bloodGroup << endl;
    cout << "Height(inch): " << height << endl;
    cout << "Age: " << age << endl;
    cout << "Adress: " << adress << endl;
}

int main()
{
    string name, adress, bloodGroup;
    int roll, reg, batch, age;
    double cgpa, marks, height;
    student student;
    for (int i = 0; i < 1; i++)
    {
        cout << "Name: ";
        cin>>name;
        cout << "Roll: ";
        cin>>roll;
        cout << "Reg: ";
        cin>>reg;
        cout << "Batch: ";
        cin>>batch;
        cout << "Marks: ";
        cin>>marks;
        cout << "CGPA: ";
        cin>>cgpa;
        cout << "BGroup: ";
        cin>>bloodGroup;
        cout << "Height(inch): ";
        cin>>height;
        cout << "Age: ";
        cin>>age;
        cout << "Adress: ";
        cin>>adress;
        student.getData(name, roll, reg, batch, marks, cgpa, bloodGroup, height, age, adress);
    }
    cout<<"\n";

    for (int j = 0; j < 1; j++)
    {
        cout<<"Student_"<<j+1<<endl;
        student.showData();
        cout<<"\n";
    }
    
}
