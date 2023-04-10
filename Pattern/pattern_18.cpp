#include <iostream>
using namespace std;

/* Print the following pattern :-

    E 
    D E 
    C D E 
    B C D E 
    A B C D E 

*/

void printPattern(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (char j = 'E'-i; j <= 'E'; j++)
        {
            cout<<j<<" ";
        }
        cout << endl;
    }
}

int main()
{
    printPattern(5);
    return 0;
}