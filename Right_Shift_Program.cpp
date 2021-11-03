//Code By: Dileep

#include<iostream>
using namespace std;

int main()
{
    //Checking Wheather the Bit is Set are not using Right Shift Operator
    int val = 20,k=4;
    int right_shift = val>>(k-1);
    int check = right_shift | 0;
    if(check==1){
        cout<<"Bit is Set"<<endl;
    }
    else{
        cout<<"Bit is Not Set"<<endl;
    }
}
