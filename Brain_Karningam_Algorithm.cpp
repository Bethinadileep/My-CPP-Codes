//Code by Dileep
#include<iostream>
#include<stack>
using namespace std;

int main()
{
    //Counting the Number of bits which are set
    int n = 5,count=0;
    while(n!=0){
        n=(n&(n-1));
        count++;
    }
    cout<<count;
}
