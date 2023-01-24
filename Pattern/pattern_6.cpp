#include <iostream>
using namespace std;

/* Print the following pattern :-

    12345
    1234
    123
    12
    1
*/

void printPattern(int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j <= n; j++)
        {
            cout<<j-i;
        }
        cout<<endl;
    }
    
}

int main(){
    printPattern(5);
    return 0;
}