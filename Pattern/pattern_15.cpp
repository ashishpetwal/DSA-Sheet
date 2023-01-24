#include <iostream>
using namespace std;

/* Print the following pattern :-

    ABCDE
    ABCD
    ABC
    AB
    A

*/

void printPattern(int n){
    for(int i=n;i>0;i--){
        for(int j=0;j<i;j++){
            cout<<char(65+j);
        }
        cout<<endl;
    }
}

int main(){
    printPattern(5);
    return 0;
}