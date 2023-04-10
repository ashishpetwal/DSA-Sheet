#include <iostream>
using namespace std;

/* Print the following pattern :-

    **********
    ****  ****
    ***    ***
    **      **
    *        *
    *        *
    **      **
    ***    ***
    ****  ****
    **********

*/

void printPattern(int n)
{
    int spaces = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= n-i; j++)
        {
            cout<<"*";
        }
        for (int k = 0; k < spaces; k++)
        {
            cout<<" ";
        }
        for (int j = 1; j <= n-i; j++)
        {
            cout<<"*";
        }
        spaces+=2;
        cout<<endl; 
    }
    spaces = 2*n-2;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout<<"*";
        }
        for (int k = spaces; k > 0; k--)
        {
            cout<<" ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout<<"*";
        }
        spaces-=2;
        cout<<endl; 
    }
    
}

int main()
{
    printPattern(5);
    return 0;
}