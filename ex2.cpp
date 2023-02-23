#include <iostream>
using namespace std;

int linearSearch(int arr[], int n,int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return i;
        }
    
    }
    return 1;
}
int main(){
    int arr[] = {2,2,6,8,8};
    int n = 5;
    int key;
    cout<<"which element do you want to search for: ";
    cin>>key;

    for(int i=0;i<n;i++){
        return arr[i];
    }

    int pos = linearSearch(arr,n,key);
    if(pos==-1){
        cout<<"element not found";
    }else{
        cout<<"element found at: "<<pos<<endl;
    }
}