//Code by : Dileep
#include<iostream>
using namespace std;

void initialize(int *table){
    table[0] = 0;
    for(int i=1;i<256;i++){
        table[i] = table[i>>1] + (i&1);
    }
}

int main()
{
  //Look up Table -> O(1) Time Complexity
    int table[256];
    initialize(table);

    int n;
    cin >> n;

    int count = 0;
    for(int i=0;i<4;i++)
    {
        count+=table[n&255];
        n=n>>8;
    }
    cout<<count<<endl;
}
