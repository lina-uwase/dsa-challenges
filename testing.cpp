#include<iostream>
using namespace std;

struct Student{
    int age;
    string name;
    int rollNumber;
}student1,student2,student3;

void print_studentData(Student s){
    cout<<s.age<<endl;
    cout<<s.name<<endl;
    cout<<s.rollNumber<<endl;
}


int main(){
    cout<<"enter name: ";
    cin>>student1.name;
    cout<<"enter age: ";
    cin>>student1.age;
    cout<<"enter rollNumber: ";
    cin>>student1.rollNumber;

    cout<<"Displaying data "<<endl;
    print_studentData(student1);
   
    return 1;
}
