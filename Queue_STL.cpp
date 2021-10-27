//Code by:Dileep
#include<iostream>
#include<queue>
using namespace std;
int main()
{
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    cout <<"Queue Size Before Printing the Elements:"<< q.size() << endl;
    cout <<"Queue Elements are:";
    while (!q.empty()) {
        cout <<" "<< q.front();
        q.pop();
    }
    cout << endl;
    cout << "Queue Size After Printing the Elements:" << q.size();
    return 0;
}
