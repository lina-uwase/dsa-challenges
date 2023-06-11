#include <iostream>  
using namespace std;  
int main ()  
{  
    int arr[100], st, mid, end, i, num, tgt;  
      
    cout << " What is the size of the arrray: " << endl;  
    cin >> num;
        cout << "Enter the values to be stored in the array: " << endl;  
  
    for (i = 0; i < num; i++)  
    {  
        cout << " arr [" << i << "] = ";  
        cin >> arr[i];  
    }  
    st = 0;  
    end = num - 1; 
    cout << " What is the value to be searched in the array?  " << endl;  
    cin >> tgt;  
    while ( st <= end)  
    {  
         mid = ( st + end ) / 2;  
        if (arr[mid] == tgt)  
        {  
            cout << " The element is found at index: " << (mid + 1)<<endl;  
            exit (0); 
        }   
        else if ( tgt > arr[mid])  
        {  
            st = mid + 1; 
        }  
           
        else if ( tgt < arr[mid])  
        {  
            end = mid - 1;
        }  
    }  
    cout << " Number is not found. " << endl;  
    return 0;  
} 