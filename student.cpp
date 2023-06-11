#include<iostream>
using namespace std;

class Student{
    int id;
    string name;
    int age;
    Student *student;

    Student (int roll,string n,int a){
        this->id=id;
        this->name=n;
        this->age=a;
        student=NULL;
        
    }
    void display(Student *node){
        while(node!=NULL){
            cout<<node->name<<endl;
            cout<<node->age<<endl;
            node=node->student;
        }
    }

};

int main(){
    // student *student1=new student();
}