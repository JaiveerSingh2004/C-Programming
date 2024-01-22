#include<iostream>
using namespace std;
 
int main()
{
/*
// Print alphabets from a to z
    char name;
    for (name = 'a'; name<='z'; name = name+ 1)
    {
        cout<<name<<endl;
    }
*/

/*
// Reverse Order
    int n, i;
    cin>>n;
    for (i = n; i>=0; i--)
    {
        cout<<i<<endl;
    }
*/

/*
// Difference of 3
    int n, i;
    cin>>n;

    for (i = 1; i<=n; i = i + 3)
    {
        cout<<i<<" ";
    }
*/

/*
// Multiplication Table (Type 1)
    int i, n;
    cin>>n;

    for (i=1; i<=10; i++)
    {
        cout<<n<<" X "<<i<<" = "<<i * n<<endl;
    }
*/

/*
// Multiplication Table (Type 2)
    int i, n;
    cin>>n;

    for (i = n; i<=n*10; i = i + n)
    {
        cout<<i<<endl;
    }
*/

/*
// Power to the number
    int num, pow;
    cout<<"Enter the number: "<<endl;
    cin>>num;
    cout<<"Enter the power: "<<endl;
    cin>>pow;

    int n = num;
    for(int i = 1; i<pow; i++)
    {
        num = num * n;
    }
    cout<<num;
*/

/*
// Sum of n natural numbers (Type 1)
    int i, sum, n;
    cin>>n;
    sum = 0;

    for (i=1; i<=n; i++)
    {
        sum = sum + i;
    }
    cout<<sum;
*/

/*
// Sum of n natural numbers (Type 1)
    int n;
    cin>>n;
    int sol = (n+1) * n;
    cout<<sol/2;
*/

/*
// Sum of square of n natural numbers (Type 1)
    int n, sum, i;
    cin>>n;
    sum = 0;
    for (i=1; i<=n; i++)
    {
        int iSq = i * i;
        sum = sum + iSq;
    }
    cout<<sum;
*/

/*
// Factorial of a given number (Super-Important)
    int n, i, fact;
    cin>>n;

    fact = 1;

    for(i=1; i<=n; i++) // Aternatively, the initial value of i can also be 2.
    {
        fact = fact * i;
    }
    cout<<fact;
*/

/*
// Prime or Not
    int n, i;
    cin>>n;

    if (n<2)
    {
        cout<<"Not Prime";
        return 0;
    }
    else
    {
        for(i = 2; i<n; i++)
        {
            if (n % i == 0)
            {
                cout<<"Not Prime";
                return 0;
            }
            else
            {
                cout<<"Prime";  
                return 0;
            }
        }
    }
*/

/*
// Fibonachhi Series (Super Important)
    int last = 0, pre = 1, curr, n, i;
    cin>>n;
    for (i = 1; i<=n; i++)
    {
        curr = last + pre;
        last = pre;
        pre = curr;
    }
    cout<<curr;
*/
 return 0;
}