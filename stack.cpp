#include<iostream>
using namespace std;
class stack{
		int *arr;
		int nextIndex;
		int capacity;
	public:
		stack(){
			capacity=5;
			arr= new int[capacity];
			nextIndex=0;	
		}


		void push(int element){
			if (nextIndex==capacity){
				cout<<"Stack overflow"<<endl;
				
			}
			else{
				arr[nextIndex]=element;
				nextIndex++;
				
			}
		}

		bool empty(){
			return nextIndex==0;
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
				cout<<"Stack underflow"<<endl;
				
			}
			else{
				cout<<top()<<endl;
				nextIndex--;
			}
            return 0;
		}
		
};
int main(){
	stack s;
	s.push(10);
	s.push(20);
	s.push(30);
	s.pop();
	cout<<s.size()<<" This is the size"<<endl;
	return 0;
}
