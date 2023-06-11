#include <iostream>
using namespace std;

int main(){
    struct student
    {
       int age;
       string name;
       void display(){
        cout<<age<<endl;
        cout<<name<<endl;
       }
    };
    // void reprint(student){
        
    // }
   struct student s;
   s.age=10;
   s.name="lina";
   s.display();
    
}