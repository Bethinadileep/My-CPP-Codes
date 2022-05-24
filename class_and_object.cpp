#include <iostream>
#include <string>
using namespace std;

class MyClass {
	public:
    	int num;
        string myString;
};

int main() {
	MyClass myObj; //creating the object of myclass
    
    //Access attributes and set values
    myObj.num = 15;
    myObj.myString = "Some text";
    
    //print values
    cout << myObj.num << "\n";
    cout << myObj.myString;
    return 0;
}
