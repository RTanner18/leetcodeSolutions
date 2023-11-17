#include <iostream>
using namespace std;

int main(){
    int limit = 5;
    int fib[] = {0,1,0,0,0};
    for(int temp = 2; temp<limit;temp++){
        fib[temp]=fib[temp-2]+fib[temp-2];
    }
    for(int x=0;x<limit;x++){
        cout<<fib[x]<<"\t";
    }
    cout<<endl;
}