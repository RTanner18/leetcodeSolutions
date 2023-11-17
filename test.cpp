#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main(){
    unsigned int seed = time(0);
    srand(seed);
    for(int y = 0; y<5; y++){
        for(int x = 0; x<6; x++){
            int num = rand();
            cout<<num<<"\t";
        }
        cout<<endl;
    }
}