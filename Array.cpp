#include <iostream>
#include <climits>

using namespace std;

int main()
{
	/*
	// How to Initalize an Array:
	//1.	
    int arr[] = {3,4,5,7,8}; // Will Initialize array of 
    cout<<arr[0];
    */
    
    /*
    //2. By Taking user from user:
    int arr[10];
    for(int i = 0; i<10; i++)
    {
    	cin>>arr[i];
	}
	cout<<"Ouputs: ";
	for(int i = 0; i<=9; i++)
	{
		cout<<arr[i];
	}
    */
    
    /*
    // 3. My Giving limited values to array.
    int arr[5] = {8,4};
    for(int i = 0; i<=1; i++)
    {
    	cout<<arr[i];
	}
	
	// The remaining empty of the array would contain the garbage value
    */
    
	/*
	// 4. Initializing array with 0
	int arr[5] = {0};
	for(int i = 0; i<=4; i++)
    {
	     cout<<arr[i];
	}
	*/ 
	
	// /*
	// Q: Remove minimum/maximum element from an array.
	 int arr[5] = {7,11,15,4,9};
	//  int ans = INT_MAX;
     int ans = INT_MIN;
	 for(int i = 0; i<5; i++)
	 {
	 	 if (arr[i]<ans) // For Minimum
	 //  if (arr[i]>ans) // For Maximum
	 	 {
	 	 	ans = arr[i];
		  }
	 }
	 cout<<ans;
	// */

/*
// Sum of n elements in an array.

	int arr[5];
	int sum = 0;
	for(int i = 0; i<5; i++)
	{
		cin>>arr[i];
		sum += arr[i]; 
	}

	for(int i = 0; i<5; i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;

	cout<<sum<<endl;
*/

	
	
    return 0;
}
