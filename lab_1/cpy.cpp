#include <iostream>
#include <cstring>
using namespace std;
class student
{
public:
    char name[30];
    char address[50];
    char bloodGroup[10];
    int roll;
    int reg;
    int batch;
    int age;
    double cgpa;
    double marks;
    double height;
    void getData(char *NAME, int ROLL, int REG, int BATCH, double MARKS, double CGPA, char *BLOODGROUP, double HEIGHT, int AGE, char *ADDRESS);
    void showData();
};
void student::getData(char *NAME, int ROLL, int REG, int BATCH, double MARKS, double CGPA, char *BLOODGROUP, double HEIGHT, int AGE, char *ADDRESS)
{
    strcpy(name, NAME);
    roll = ROLL;
    reg = REG;
    batch = BATCH;
    marks = MARKS;
    cgpa = CGPA;
    strcpy(bloodGroup, BLOODGROUP);
    height = HEIGHT;
    age = AGE;
    strcpy(address, ADDRESS);
}
void student::showData()
{
    cout << "Name: " << name << endl;
    cout << "Roll: " << roll << endl;
    cout << "Reg: " << reg << endl;
    cout << "Batch: " << batch << endl;
    cout << "Marks: " << marks << endl;
    cout << "CGPA: " << cgpa << endl;
    cout << "Blood Group: " << bloodGroup << endl;
    cout << "Height: " << height << endl;
    cout << "Age: " << age << endl;
    cout << "Address: " << address << endl;
}
int main()
{
    char name[30], address[50], bloodGroup[10];
    int roll, reg, batch, age;
    double cgpa, marks, height;
    student student[5];
    for (int i = 0; i < 5; i++)
    {
        cout << "Input data of Student_" << i + 1 << endl;
        cout << "Name: ";
        cin >> name;
        cout << "Roll: ";
        cin >> roll;
        cout << "Reg: ";
        cin >> reg;
        cout << "Batch: ";
        cin >> batch;
        cout << "Marks: ";
        cin >> marks;
        cout << "CGPA: ";
        cin >> cgpa;
        cout << "Blood Group: ";
        cin >> bloodGroup;
        cout << "Height: ";
        cin >> height;
        cout << "Age: ";
        cin >> age;
        cout << "Address: ";
        cin >> address;
        student[i].getData(name, roll, reg, batch, marks, cgpa, bloodGroup, height,
                           age, address);
    }
    cout << "\n";
    for (int j = 0; j < 5; j++)
    {
        cout << "Student_" << j + 1 << endl;
        student[j].showData();
        cout << "\n";
    }
    return 0;
}