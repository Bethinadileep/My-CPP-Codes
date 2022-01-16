//codeby: Dileep

#include<bits/stdc++.h>
using namespace std;

void printF(int ind,vector<int> &dp,int arr[],int n){
    if(ind==n){
        for(auto id:dp){
            cout<<id<<" ";
        }
        if(dp.size()==0){
        cout<<"{}";
        }
        cout<<endl;
        return;
    }
    
    
    //take or pick particular index into the subsequence
    dp.push_back(arr[ind]);
    printF(ind+1,dp,arr,n);
    dp.pop_back();
    //not take or not pick this condition will not add in our subsequence.
    printF(ind+1,dp,arr,n);

}
int main()
{
    int arr[] = {3,1,2};
    int n = 3;
    vector<int> dp;
    printF(0,dp,arr,n);
    return 0;
}
