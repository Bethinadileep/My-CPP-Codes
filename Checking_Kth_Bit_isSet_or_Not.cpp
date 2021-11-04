//code by : Dileep
#include <iostream>
using namespace std;

void isKthBitSet_left(int n, int k) {
  //using Left shift operator
  if (n & (1 << k - 1))
  {
    cout << "SET" << endl;
  }
  else
  {
    cout << "NOTSET" << endl;
  }
}

void isKthBitSet_right(int n, int k) {
  //using Right shift operator
  if ((n >> (k - 1)) & 1)
  {
    cout << "SET" << endl;
  }
  else
  {
    cout << "NOTSET" << endl;
  }
}

int main()
{
  int n = 20, k = 5;
  
  isKthBitSet_left(n,k);
  
  isKthBitSet_right(n,k);
  
  return 0;
}
