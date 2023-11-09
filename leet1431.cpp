/*
There are n kids with candies. You are given an integer array candies, 
where each candies[i] represents the number of candies the ith kid has, 
and an integer extraCandies, denoting the number of extra candies that you have.

Return a boolean array result of length n, where result[i] is true if, 
after giving the ith kid all the extraCandies, they will have the greatest 
number of candies among all the kids, or false otherwise.

Note that multiple kids can have the greatest number of candies.
*/

#include <iostream>

using namespace std;

int n;

int main(){
    //take input of length
    cout<<"Enter the amount of kids: ";
    cin>>n;

    //initilize arrays
    int candies[n];
    int extraCandies;
    bool results[n];

    //take input of candies
    for(int x=0;x<n;x++){
        cout<<"Enter candies for Kid "<<(x+1)<<": ";
        cin>>candies[x];
    }

    //take input of extra candies
    cout<<"Enter the amount of extra candies :";
    cin>>extraCandies;

    //test for greatest value
    int greatest = candies[0];
    for(int x = 1; x<n;x++){
        if(candies[x]>greatest)
            greatest = candies[x];
    }

    //test for results value
    for(int x = 0; x<n;x++){
        if(greatest<=(candies[x]+extraCandies))
            results[x] = true;
        else
            results[x] = false;
    }

    //return results
    for(int x=0;x<n;x++){
        if(results[x])
            cout<<"true";
        else
            cout<<"false";
        if(x<(n-1))
            cout<<",";
    }
    cout<<"\n";
}