#include<iostream>
using namespace std;
 
/*
// Fucntion to check if a number is prime or not.

bool isPrime(int n)
//return_type  fucntion_name (parameters)
  {
    
        if (n<2)
        {
        return 0;
        }

        for(int i=2; i<n; i++)
        {
            if (n % i == 0)
            {
                return 0;
            }

            return 1;
            
        }
        
  }  
*/

/*
// Function to find factorial of a given number
int fact(int n)
{
    int ans = 1;
    for(int i=1; i<=n; i++)
    {
        ans *= i;
    }
    return ans;
}
*/

/*
// Function to find sum of 2 numbers.
    int sum(int a, int b)
    {
        return a + b;
    }
*/

/*
void fun()  // This is a void function which dont returns anything.
{
    cout<<"Hello!!!";
}
*/

// /*
// Swapping of values of two variables (Using third variable)
void Swapping(int &a, int &b) // will swap the address.
// void Swap(int a, int b) will swap only values.
{
    int c;
    c = a;
    a = b;
    b = c;
}
// */

int main()
{

    // int num;
    int num1, num2;
    // cout<<"Enter Number: "; cin>>num;
    cout<<"Enter Number: "; cin>>num1>>num2;
    // cout<<isPrime(num)<<endl;
    // cout<<fact(num)<<endl;
    // cout<<sum(2,3);
    // fun();

    cout<<"Before Swapping: "<<endl;
    cout<<"Value of a is: "<<num1<<endl;
    cout<<"Value of b is: "<<num2<<endl;

    Swapping(num1,num2);
    // swap(num1, num2); // Inbuilt Function to swap two variables. 

    cout<<"After Swapping: "<<endl;
    cout<<"Value of a is: "<<num1<<endl;
    cout<<"Value of b is: "<<num2<<endl;


 return 0;
}