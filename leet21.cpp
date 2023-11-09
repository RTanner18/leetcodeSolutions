#include <iostream>
#include <algorithm>

using namespace std;

void selectionSort(int arr[], int size){
    int minIndex, minValue;
    for(int start = 0; start<size;start++){
        minIndex = start;
        minValue = arr[start];
        for(int index = start+1; index<size; index++){
            if(arr[index] < minValue){
                minIndex = index;
                minValue = arr[index];
            }
        }
        swap(arr[minIndex],arr[start]);
    }
}

int main(){
    //input list 1
    int n;
    cout<<"List 1 - How many numbers in list 1: ";
    cin>>n;
    int list1[n];
    for(int x = 0;x<n;x++){
        cout<<"Enter number "<<x+1<<": ";
        cin>>list1[x];
    }

    //input list 2
    int p;
    cout<<"List 2 - How many numbers in list 2: ";
    cin>>p;
    int list2[p];
    for(int x = 0;x<n;x++){
        cout<<"Enter number "<<x+1<<": ";
        cin>>list2[x];
    }

    //merge lists
    int tot = p+n;
    int merge[tot];
    for(int x = 0;x<n;x++){//list 1 merge
        merge[x]=list1[x];
    }
    for(int x = n;x<(n+p);x++){//list 2 merge
        merge[x]=list2[x-n];
    }

    //resort
    selectionSort(merge,n+p);

    //output results
    for(int x = 0; x<tot;x++){
        cout<<merge[x];
        if(x<(tot-1))
            cout<<",";
    }
    cout<<endl;
}