/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
//An armstrong number is a number which equal to the sum of the cubes of its individual digits.
//example 0, 1, 153, 370, 371.
int
main ()
{ int num,x,d,sum=0;
    printf("enter a number");
    scanf("%d",&num);
    x=num;
    while(x>0)
    {
        d=x%10;
        sum=sum+d*d*d;
        x=x/10;
    }
    if(sum==num)
    {
        printf("%d is armstrong",num);
    }
    else
    {
        printf("%d is not armstrong",num);
    }
  return 0;
}

