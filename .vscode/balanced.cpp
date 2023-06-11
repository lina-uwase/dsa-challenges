#include <iostream>
#include <string>

using namespace std;

bool isValid(string s) {
    char stack[
    s.size()]; 
    int top = -1; 
    
    for (char c : s) {
        switch (c) {
            case '(':
            case '[':
            case '{':
                stack[++top] = c; 
                break;
            case ')':
                if (top == -1 || stack[top] != '(') return false; 
                top--; 
                break;
            case ']':
                if (top == -1 || stack[top] != '[') return false; 
                top--; 
                break;
            case '}':
                if (top == -1 || stack[top] != '{') return false; 
                top--; 
                break;
        }
    }
    
    return top == -1; 
}

int main() {
    string s1;
    cout<<"Enter the string to be checked:  ";
    cin>>s1;
    cout<<boolalpha<<isValid(s1)<<endl;

    
    return 0;
}