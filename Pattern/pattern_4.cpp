#include <iostream>
using namespace std;

/* Print the following pattern :-

    1 
    2 2 
    3 3 3 
    4 4 4 4 
    5 5 5 5 5  
*/

void printPattern(int n){
    for (int i = 1; i < n+1; i++)
    {
        for (int j = 1; j < i+1; j++)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
    
}

int main(){
    printPattern(5);
    return 0;
}