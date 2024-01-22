#include<iostream>
using namespace std;
 
int main()
{
    int num;
    cout<<"Enter the Number: "; cin>>num;
/*

// Decimal to Binary Convertor

    // int num = 13;
    int rem, ans = 0;
    int mul = 1;
    while(num>0)
    {
        rem = num % 2;
        num /=2;
        ans += rem * mul;
        mul *= 10;
    } 
    cout<<ans;
*/

/*
// Binary to Decimal Covertor

    // int num = 1101;  //13
    int ans, rem = 0;
    int mul = 1;
    ans = 0;
    while (num>0)
    {
        rem = num % 10;
        ans = rem * mul + ans;
        mul = mul *2;
        num /= 10;
    }
    cout<<ans;
*/

/*

// Decimal to Octal Convertor

    int rem, ans = 0;
    int mul = 1;
    while(num>0)
    {
        rem = num % 8;
        num /=8;
        ans += rem * mul;
        mul *= 10;
    } 
    cout<<ans;
*/

/*
// Octal to Decimal Covertor

    // int num = 1101;  //13
    int ans, rem = 0;
    int mul = 1;
    ans = 0;
    while (num>0)
    {
        rem = num % 10;
        ans = rem * mul + ans;
        mul = mul *8;
        num /= 10;
    }
    cout<<ans;
*/




 return 0;
}