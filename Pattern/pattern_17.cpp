#include <iostream>
using namespace std;

/* Print the following pattern :-

   A
  ABA
 ABCBA
ABCDCBA

*/

void printPattern(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = n; j > i; j--)
        {
            cout << " ";
        }
        for (int k = 1; k < i; k++)
        {
            cout << char(64 + k);
        }
        cout << char(64 + i);
        for (int k = i; k > 1; k--)
        {
            cout << char(65 + k - 2);
        }

        cout << endl;
    }
}

int main()
{
    printPattern(4);
    return 0;
}