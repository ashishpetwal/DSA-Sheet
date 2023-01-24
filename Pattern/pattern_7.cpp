#include <iostream>
using namespace std;

/* Print the following pattern :-

    *
   ***
  *****
 *******
*********
*/

void printPattern(int n){
    for (int i = 1; i <= n; i++)
    {
        for (int j = n; j > i; j--)
        {
            cout<<" ";
        }
        for(int k = 0;k<2*i-1;k++){
            cout<<"*";
        }
        cout<<endl;
    }
    
}

int main(){
    printPattern(5);
    return 0;
}