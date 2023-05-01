#include <iostream>
using namespace std;

class stack{
    int nextIndex;
    int *arr;
    int capacity;
    public:
    stack(){
        capacity = 5;
        arr = new int[capacity];
        nextIndex = 0;
    }

    void push(int element){
        if(nextIndex==capacity){
            cout<<"stack overflow"<<endl;
        }else{
            arr[nextIndex]=element;
        }
    }

    bool empty(){
        return nextIndex;

    }

    int size(){
        return nextIndex;
        return 0;
    }

    int top(){
        return arr[nextIndex-1];
    }

    int pop(){
        if(empty()){
            cout<<"stack underflow"<<endl;
            
        }else{
            cout<<top()<<endl;
            nextIndex--;
        }
    }
  
};

int main(){
    stack cs;
    cs.push('a');
    cs.push('d');
    cs.push(97);
    cs.push(105);

    cout<<cs.size()<<endl;
    cout<<cs.top()<<endl;


    // stack s;
    // s.push(10);
    // s.push(20);
    // s.push(30);

    cout<<cs.size()<<"this is the stack's size"<<endl;
    return 0;
}