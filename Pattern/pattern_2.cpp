#include <iostream>
using namespace std;

/* Print the following pattern :-

    * 
    * * 
    * * * 
    * * * * 
    * * * * * 
*/

void printPattern(int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i+1; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    
}

int main(){
    printPattern(5);
    return 0;
}