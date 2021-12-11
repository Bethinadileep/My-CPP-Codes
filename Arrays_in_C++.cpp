//codeby : Dileep
#include<iostream>
using namespace std;

int main()
{
    string cars[4] = {"BMW","Volvo","Bugatti","Benz"};
    cout<<cars[3]<<endl;
    string books[5] = {"DSA","OOPS","Python","C++","Java"};
    cout<<books[0]<<endl;
    int years[5] = {2021,2022,2023,2024,2025};
    cout<<years[1]<<endl;
    int num[5];
    for(int i=0;i<5;i++){
        cin>>num[i];
    }
    for(int i=0;i<5;i++){
        cout<<num[i]<<" ";
    }
    return 0;
}
