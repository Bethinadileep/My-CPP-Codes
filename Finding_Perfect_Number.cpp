#codeby : Dileep
#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int number;
    cout<<"Enter a Number";
    cin>>number;
    int sum=0,rem=0,ref;
    ref=number;
    for(int i=1;i<=number-1;i++){
        rem = number%i;
        if(rem==0){
            sum+=i;
        }
    }
    if(sum==ref){
        cout<<"The Number is a Perfect Number"<<endl;
    }
    else{
        cout<<"The Number is Not a Perfect Number"<<endl;
    }
  return 0;
}
