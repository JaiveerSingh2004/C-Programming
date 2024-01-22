#include<iostream>
using namespace std;
 
int main()
{
    int num;
    cout<<"Enter: ";cin>>num;
/*
// Reverse of a number 
    int rem;
    int mul = 1;
    int ans = 0;
    while(num>0)
    {
        rem = num % 10;
        ans = ans*10 + rem;
        num = num / 10;
    }
    cout<<ans;
*/


/*
// Sum of Digits using While Loop
    int ans = 0;
    while(num>0)
    {
        int num1 = num % 10;
        num /= 10;
        ans += num1;
    }
    cout<<ans;
*/
/*
// Sum of Digits using For Loop
    while(num>9)
    {
        int ans = 0, rem;
        while (num>0)
        {
            rem = num % 10;
            num /= 10;
            ans += rem;
        }
        num = ans;
    }
    cout<<num;
*/

// /*
// Leap Year
    bool leap = false; 
    if(num % 400 == 0)
    {
        leap = true;
    }
    else if (num % 4 == 0 && num % 100 != 0)
    {
        leap = true;
    }

    if (leap)
    {
        cout<<"Leap";
    }
    else
    {
        cout<<"Not Leap";
    }
// */

 return 0;
}