#include<iostream>
#include<cmath>

using namespace std;

int armst(int n,int count)
{
    int rem,ans=0;
    while(n)
    {
        rem=n%10;
        ans=ans+pow(rem,count);
        n/=10;
    }
    return ans;
}
 
int main()
{
    int a,n,count=0;
    cout<<"enter n: "; cin>>n;
    int temp;
    temp=n;
    while(n)
    {
        count++;
        n/=10;
    }
    a=armst(temp,count);
    if(a==temp)
    {
        cout<<"yes";
    }
    else
    {
        cout<<"no";
    }

 return 0;
}