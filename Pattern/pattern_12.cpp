#include <iostream>
using namespace std;

/* Print the following pattern :-

    1             1 
    1 2         2 1 
    1 2 3     3 2 1 
    1 2 3 4 4 3 2 1  

*/

void printPattern(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        for(int k=0;k<2*n-2*i;k++){
            cout<<"  ";
        }
        for(int j=i;j>=1;j--){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

int main(){
    printPattern(4);
    return 0;
}