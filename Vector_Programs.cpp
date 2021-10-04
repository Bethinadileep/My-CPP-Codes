#include<iostream>
#include<vector>
using namespace std;

int main()
{
	//Vectors -> Dynamic Arrays
	vector<int> v;
	v.push_back(3);
	v.push_back(2);
	v.push_back(1);

	for(int i=0; i<v.size(); i++) {
		cout << v[i] << endl;
	}

	vector<int>::iterator it;
	for(it=v.begin();it!=end();it++) {
		cout << *it <<endl;
	}

	//auto
	for(auto element : v) {
		cout << element << endl;
	}

	v.pop_back(); // 3,2

	vector<int> v2 (2,50);
	//50 50

	swap(v,v2);

	for(auto element : v) {
		cout << element << endl; //50,50
	}

	for(auto element : v2) {
		cout << element << endl;  // 3,2
	}

	sort(v.begin(),v.end());

	return 0;

}
