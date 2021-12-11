//codeby : Dileep
#include<iostream>
using namespace std;

int main()
{
  
    //Reference Variable
    string food = "Pizza"; //Food Variable
    string &meal = food; //Reference to Food Variable
    cout<<food<<"\n"; //Pizza
    cout<<meal<<"\n"; //Pizza
    
    return 0;
}
