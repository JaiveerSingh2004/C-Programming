#include<iostream>
using namespace std;
 
int main()
{
    /*
    int arr[5] = {5,8,7,9,2};

    for(int i = 0; i<=4; i++)
    {
        int index = i;
        for(int j = i+1; j<5; j++)
        {
            if (arr[j]<arr[index])
            {
                index = j;
            }
        }
        swap(arr[index], arr[i]);
    } 
    for(int i = 0; i<5; i++)
    {
        cout<<arr[i]<<" ";
    }
    */

    // /*
    // Selection Sort in Array
    int n;
    cout<<"Enter the size of array: ";cin>>n;

    int arr[n];

    for(int i = 0; i<n; i++)
    {
        cout<<"Enter num at index"<<i<<" :";
        cin>>arr[i];
    }

    cout<<"Without Sorting: "<<endl;

    for(int i = 0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
cout<<endl;
    for(int i = 0; i<=n-1; i++)
    {
        int index = i;
        for(int j = i+1; j<n; j++)
        {
            if (arr[j] < arr[index])
            {
                index = j;
            }
        }
        swap(arr[index], arr[i]);
    }

    cout<<"After Sorting: "<<endl;

    for(int i = 0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }

    
    // */
 return 0;
}