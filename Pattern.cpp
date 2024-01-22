#include<iostream>
using namespace std;
 
int main()
{
    int col,row;
    int r, c;
    cout<<"Enter the no. of rows: "; cin>>r;
    // cout<<"Enter the no. of columns: "; cin>>c;
    /*
// Single Line Pattern
    for(int i=1; i<=r; i++)
    {
        cout<<"*"<<" ";
    }
*/

/*
// Square
    for (row = 1; row<=r; row++)
    {
        for (col = 1; col<=c; col++)
        {
            cout<<"* ";
        }
        cout<<endl;
    } 
*/

/*
// Square 10
    for (row = 1; row<=r; row++)
    {
        for (col = 1; col<=c; col++)
        {
            cout<<"10 ";
        }
        cout<<endl;
    } 
*/

// Increasing Number Square
/* 
    1 1 1 1 1
    2 2 2 2 2
    3 3 3 3 3
    4 4 4 4 4
    5 5 5 5 5
*/
// My Method
/*
    int count = 0;
    for (row = 1; row<=r; row++)
    {
        count = count + 1;
        for (col = 1; col<=c; col++)
        {
            cout<<count<<" ";
        }
        cout<<endl;
    }
*/
/*
// Given Method 

    // int count = 0;
    for (row = 1; row<=r; row++)
    {
        // count = count + 1;
        for (col = 1; col<=c; col++)
        {
            cout<<row<<" ";
        }
        cout<<endl;
    } 

*/


  
/*
Pattern:
    1 2 3 4 5
    1 2 3 4 5
    1 2 3 4 5
    1 2 3 4 5

*/

/*
    for (row=1; row<=r; row++)
    {
        for (col=1; col<=c; col++)
        {
            cout<<col <<" ";
        }
        cout<<endl;
    }

*/

/*
    Pattern:
    5 4 3 2 1
    5 4 3 2 1
    5 4 3 2 1
    5 4 3 2 1
    5 4 3 2 1
*/
/*
    for(row=1; row<=r; row++)
    {
        for(col=c; col>=1; col--)
        {
            cout<<col<<" ";
        }
        cout<<endl;
    }
*/

/*
    Pattern:
    1 4 6 9 25
    1 4 6 9 25
    1 4 6 9 25
    1 4 6 9 25
    1 4 6 9 25
*/
/*
    for(row=1; row<=r; row++)
    {
        for(col=1; col<=c; col++)
        {
            int colSq = col * col;
            cout<<colSq<<" ";
        }
        cout<<endl;
    }
*/

/*
    Pattern:
    a a a a a
    b b b b b
    c c c c c 
    d d d d d 
    e e e e e 
*/
/*
    for(char row= 'a'; row<='e'; row++)
    {
        for(col=1; col<=5; col++)
        {
            cout<<row<<" ";
        }
        cout<<endl;
    }
*/

/*
    Pattern:
    a b c d e 
    a b c d e 
    a b c d e 
    a b c d e 
    a b c d e 
*/
/*
    for(row= 1; row<=5; row++)
    {
        for(char col='a'; col<='e'; col++)
        {
            cout<<col <<" ";
        }
        cout<<endl;
    }
*/

/*
    Pattern:

    1 2 3 4 5
    6 7 8 9 10
    11 12 13 14 15
    16 17 18 19 20
    21 22 23 24 25
*/
/*
    int count = 1;
    for(row=1; row<=r; row++)
    {
        for(col=1; col<=c; col++)
        {
            cout<<count<<" ";
            count = count + 1;
        }
        cout<<endl;
    }
*/
// ____________________________________________________________________________________
// Advance Star Problems
/*
Pattern
    *
    * *
    * * *
    * * * *
    * * * * *
*/
/*
    for(row=1; row<=r; row++)
    {
        for(col=1; col<=row; col++)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
*/
/*
Pattern
    1
    1 2
    1 2 3
    1 2 3 4
    1 2 3 4 5
*/
/*

    for (row=1; row<=5; row++)
    {
        for(col=1; col<=row; col++)
        {
            cout<<col<<" ";
        }
        cout<<endl;
    }
*/
/*
    Pattern
    1 
    2 2 
    3 3 3
    4 4 4 4
    5 5 5 5 5
*/
/*
    for (row=1; row<=5; row++)
    {
        for(col=1; col<=row; col++)
        {
            cout<<row<<" ";
        }
        cout<<endl;

    }
*/

/*
    Pattern
    1
    2 1
    3 2 1 
    4 3 2 1 
    5 4 3 2 1
*/
/*
    for(row=1; row<=5; row++)
    {
        for(col=row; col>=1; col--)
        {
            cout<<col<<" ";
        }
        cout<<endl;
    }
*/

/*
    Pattern
    
    a
    b b
    c c c
    d d d d
    e e e e e
*/
/*
    
    for(row=1; row<=5; row++)
    {
        for(col= 1; col <= row; col++)
        {
            char name = 'a' + (row-1);
            cout<<name<<" ";
            // name++;

        }
        cout<<endl;
    }
*/

/*
    Pattern: 

    * * * * *
    * * * * 
    * * * 
    * * 
    * 
*/
/*
    for(row=1; row<=5; row++)
    {
        for(col=1; col<=5-(row-1); col++)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
*/

/*
    Pattern: 
    1 2 3 4 5
    1 2 3 4 
    1 2 3 
    1 2 
    1 
*/
/*
    for(row=1; row<=5; row++)
    {   
        for(col=1; col<=5-(row-1); col++)
        {
            cout<<col<<" ";
        }
        cout<<endl;
    }
*/

/*
    Pattern:
    5
    5 4 
    5 4 3
    5 4 3 2
    5 4 3 2 1
*/
/*
    for(row=1;row<=5; row++)
    {
        for(col=5; col>=5-(row-1); col--)
        {   
            cout<<col<<" ";
        }
        cout<<endl;
    }

*/
// ____________________________________________________________________________________________________________
// Advance Level Question:
/*
    Pattern:
            *
          * *
        * * *
      * * * *
    * * * * *
    for n = 5
*/
/*
    for(row=1; row<=r; row++)
    {   
        for(col=1; col<=(r - row); col++)
        {
            cout<<" ";
        }
        for(col=1; col<=row; col++)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
*/

/*
    Pattern:
            1
          2 2
        3 3 3
      4 4 4 4 
    5 5 5 5 5
*/
/*
    for(row=1; row<=r; row++)
    {
        for(col=1; col<=r-row; col++)
        {
            cout<<"  ";
        }
        for(col=1; col<=row; col++)
        {
            cout<<row<<" ";
        }
        cout<<endl;
    }
*/

/*
    Pattern:
            1 
          1 2
        1 2 3
      1 2 3 4
    1 2 3 4 5
*/
/*
    for(row=1; row<=r; row++)
    {
        for(col=1; col<=r-row; col++)
        {
            cout<<"  ";
        }
        for(col=1; col<=row;col++)
        {
            cout<<col<<" ";
        }
        cout<<endl;
    }
*/

/*
    Pattern: 
            A
          A B
        A B C
      A B C D
    A B C D E
*/
/*
    for(row=1; row<=r; row++)
    {
        for(col=1; col<=r-row; col++)
        {
            cout<<"  ";
        }
        for(char col = 'A'; col<='A'+(row-1); col++)
        {
            cout<<col<<" ";
        }
        cout<<endl;
    }
*/

/*
    Pattern:
            1
          2 1
        3 2 1
      4 3 2 1
    5 4 3 2 1
*/
/*
    for(row=1; row<=r; row++)
    {   
        for(col=1; col<=r-row; col++)
        {
            cout<<"  ";
        }
        for(col=row; col>=1; col--)
        {
            cout<<col<<" ";
        }
        cout<<endl;
    }
*/

/*
    Pattern:
    Pyramid
            *
          * * *
        * * * * *
      * * * * * * *
    * * * * * * * * *
*/
/*
    for(row=1; row<=r; row++)
    {
        for(col=1; col<=r-row; col++)
        {
            cout<<"  ";
        }
        for(col=1; col<=(2*row)-1; col++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
*/

/*
    Pattern:
            1
          1 2 1
        1 2 3 2 1
      1 2 3 4 3 2 1
    1 2 3 4 5 4 3 2 1
*/
/*
    for(row=1; row<=r; row++)
    {
        for(col=1; col<=r-row; col++)
        {
            cout<<"  ";
        }
        for(col=1; col<=row; col++)
        {
            cout<<col<<" ";
        }
        for(col=row-1; col>=1; col--)
        {
            cout<<col<<" ";
        }
        cout<<endl;
    }
*/

/*
    Pattern:

    * * * * * * * * *
      * * * * * * *
        * * * * *
          * * *
            *

*/
/*
    for(row=r; row>=1; row--)
    {
        for(col=1; col<=r-row; col++)
        {
            cout<<"  ";
        }
        for(col=(2*row)-1; col>=1; col--)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
*/

/*
    Pattern:

* * * * * * * *
* * *     * * *
* *         * *
*             *
*             *
* *         * *
* * *     * * *
* * * * * * * *
for n = 4
*/
/*
    for(row=r; row>=1; row--)
    {
        for(col=1; col<=row; col++)
        {
            cout<<"* ";
        }

        for(col=1; col<=(2*r-2*row); col++)
        {
            cout<<"  ";
        }
        for(col=1; col<=row; col++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    for(row=1; row<=r; row++)
    {
        for(col=1; col<=row; col++)
        {
            cout<<"* ";
        }
        for(col=1; col<=(2*r-2*row); col++)
        {
            cout<<"  ";
        }
        for(col=1; col<=row; col++)
        {
            cout<<"* ";
        }
        cout<<endl;    
    }
*/

/*
    Pattern:

*/
/*
    for(row=1; row<=r; row++)
    {
        for(col=1; col<=row; col++)
        {
            cout<<"* ";
        }
        for(col=1; col<=2*r-2*row; col++)
        {
            cout<<"  ";
        }
        for(col=1; col<=row; col++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    for(row=r-1; row>=1; row--)
    {
        for(col=row; col>=1; col--)
        {
            cout<<"* ";
        }
        for(col=1; col<=2*r-2*row; col++)
        {
            cout<<"  ";
        }
        for(col=row; col>=1; col--)
        {
            cout<<"* ";
        }
        cout<<endl;
    }

*/

/*
    Pattern:

*/
/*
    for(row=1; row<=r; row++)
    {
        for(col=1; col<=r-row; col++)
        {
            cout<<" ";
        }
        for(col=1; col<=row; col++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    for(row=r-1; row>=1; row--)
    {
        for(col=r-row; col>=1; col--)
        {
            cout<<" ";
        }
        for(col=row; col>=1; col--)
        {
            cout<<"* ";
        }
        cout<<endl;
    } 
*/

 return 0;
}