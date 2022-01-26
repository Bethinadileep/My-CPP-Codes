//codeby : Dileep

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
    int x;
	while(t--){
	    cin>>x;
	   
	    for(int i=1;i<=x*3;i++){
	        for(int j=1+i;j<=x*3;j++){
	            for(int k=1+j;k<=x*3;k++){
	                if((i+j+k) == x*3)
	                    cout<<i<<" "<<j<<" "<<k<<endl; break;
	            }
	            break;
	            
	        }
	    }
	    
	}
	return 0;
}
