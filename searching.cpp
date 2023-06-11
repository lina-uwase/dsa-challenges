#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int key) 
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int n;
    cout << "enter the array size: ";
    cin >> n;
    int arr[] = {};
    cout<<"enter array elements: "<<endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int key;
    cout << "Enter the key to search for: ";
    cin >> key;
    int pos = linearSearch(arr, n, key);
    if (pos == -1)
    {
        cout << "No matching item found" << endl;
    }
    else
    {
        cout << "elemet found at the index :" << pos << endl;
    }

    return 0;
}
