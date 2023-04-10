#include <iostream>
using namespace std;

/* Print the following pattern :-

    1 
    2 3 
    4 5 6 
    7 8 9 10 
    11 12 13 14 15 

*/

void printPattern(int n)
{
    int num = 1;
    for (int i = 0; i < n; i++)
    {
        for (char j = 0; j <= i; j++)
        {
            cout<<num<<" ";
            num++;
        }
        cout << endl;
    }
}

int main()
{
    printPattern(5);
    return 0;
}