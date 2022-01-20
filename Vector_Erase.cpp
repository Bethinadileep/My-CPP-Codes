//codeby : Dileep

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
    int position;
    cin>>position;
    v.erase(v.begin()+(position-1));
    int start,end;
    cin>>start>>end;
    v.erase(v.begin()+(start-1),v.begin()+(end-1));
    cout<<v.size()<<"\n";
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    return 0;
}
