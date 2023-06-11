#include<iostream>
#include <string>
using namespace std;


int  linearSearch(int arr[7]){
    int n = 7;
    int key = 5;
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return i;
        }
    }
    return 0;
}

int main(){
    int arr[7]={4,7,6,5,3,1,9};
   cout<<linearSearch(arr)<<endl;
return -1;
}