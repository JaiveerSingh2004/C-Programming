#include<iostream>
#include<cmath>
using namespace std;


/*
// a to A
char Swapping(char a)
{
    return a - 32;
}
*/

/*
// Armstrong Number
int count(int n)
{
    int count = 0;
    while (n)
    {
        count++;
        n/= 10;
    }
    return count;
}

bool Amrstrong(int num, int digit)
{
    int n = num;
    int ans = 0;
    int rem;
    while(n)
    {
        rem = n % 10;
        n /=10;
        ans = ans + pow(rem,digit);
    }

    if (ans == num)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
*/

// /*
// Trailing Zeroes in Factorial
int fact(int num)
{
    int fact = 1;
    for(int i=1; i<=num; i++)
    {
        fact *= i; 
    }
    return fact;
}

int zero(int n)
{
    int count = 0;
    while(n)
    {
        if (n%10==0)
        {
            count++;
        }
        n/=10;
    }
    return count;
}
// */

int main()
{
    
/*
// a to A
    char input;
    cout<<"Enter: "; cin>>input;
    cout<<Swapping(input)<<endl;
*/

/*
// Amrstrong Number
    int num;
    cout<<"Enter: "; cin>>num;

    int digit = count(num);
    cout<<Amrstrong(num, digit);

*/

// /*
// Counting Trailing Zeroes
    int num;
    cout<<"Enter: "; cin>>num;

    int factorial = fact(num);
    cout<<"Factorial of "<<num<<" : "<<factorial<<endl;
    cout<<"Trailing Zeroes in "<<factorial<<" : "<<zero(factorial)<<endl;
    
// */

 return 0;
}