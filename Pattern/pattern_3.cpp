#include <iostream>
using namespace std;

/* Print the following pattern :-

    1 
    1 2 
    1 2 3 
    1 2 3 4 
    1 2 3 4 5  
*/

void printPattern(int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < i+2; j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    
}

int main(){
    printPattern(5);
    return 0;
}