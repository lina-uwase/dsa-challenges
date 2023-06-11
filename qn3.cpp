#include <iostream>
using namespace std;

struct Student
{
    string studentName;
    int age;
    int rollNumber;
    double marks;

    void display()
    {
        cout << "Student name : " << studentName << "\t";
        cout << "Age : " << age << "\t";
        cout << "Roll Number:"<<rollNumber<<"\t";
        cout << "Marks: " << marks << "\t" << endl;
    };
} s1, s2, s3, s4;

int main()
{

    s1;
    cout << "Enter student1 name: ";
    getline(cin, s1.studentName);
    cout << "Enter student1 age: ";
    cin >> s1.age;
    cout << "Enter student roll number: ";
    cin >> s1.rollNumber;
    cout << "Enter student marks: ";
    cin >> s1.marks;
    

    s2;
    cout << "Enter student2 name: ";
    getline(cin, s2.studentName);
    cout << "Enter student2 age: ";
    cin >> s2.age;
    cout << "Enter student 2 roll number: ";
    cin >> s2.rollNumber;
    cout << "Enter student 2 marks: ";
    cin >> s2.marks;
    
    s1.display();
    s2.display();


}