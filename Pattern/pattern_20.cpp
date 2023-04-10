#include <iostream>
using namespace std;

/* Print the following pattern :-

*        *
**      **
***    ***
****  ****
**********
****  ****
***    ***
**      **
*        *

*/

void printPattern(int n)
{
    int spaces = 2 * n - 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        for (int k = 0; k < spaces-1; k++)
        {
            cout << " ";
        }
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        spaces -= 2;
        cout << endl;
    }
    spaces=2;
    for (int i = n - 1; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "*";
        }
        for (int k = 0; k < spaces; k++)
        {
            cout << " ";
        }
        for (int j = 0; j < i; j++)
        {
            cout << "*";
        }
        spaces+=2;
        cout << endl;
    }
}

int main()
{
    printPattern(5);
    return 0;
}