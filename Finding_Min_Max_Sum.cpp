#codeby : Dileep
#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the Size of the Array";
    cin>>n;
    int arr[5],sum=0,maxi,min;
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }
    maxi = arr[0];
    for(int i=0;i<n;i++) {
        if(maxi<arr[i]) {
            maxi=arr[i];
        }
    }
    min=arr[0];
    for(int i=0;i<n;i++) {
        if(min>arr[i]) {
            min=arr[i];
        }
        sum+=arr[i];
    }
    cout<<"Minimum Element is:"<<min;
    cout<<endl;
    cout<<"Maximum Element is:"<<maxi;
    cout<<endl;
    cout<<"Sum is: "<<sum<<endl;
    return 0;
}
