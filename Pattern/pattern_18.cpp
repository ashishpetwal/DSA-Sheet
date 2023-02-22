#include <iostream>
using namespace std;

/* Print the following pattern :-

    A
    BB
    CCC
    DDDD
    EEEEE

*/

void printPattern(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << char(65+j);
        }
        cout << endl;
    }
}

int main()
{
    printPattern(5);
    return 0;
}