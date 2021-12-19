#codeby : Dileep
#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;

int main()
{
    int number,rem,cube=0,val;
    cout<<"Enter a Number";
    cin>>number;
    val = number;
    while(number != 0) {
        rem = number % 10;
        cube += (rem*rem*rem);
        number/=10;
    }
    if(cube == val) {
        cout<<"Number is a Armstrong Number"<<endl;
    }
    else{
        cout<<"Number is Not a Armstrong Number"<<endl;
    }
  return 0;
}
