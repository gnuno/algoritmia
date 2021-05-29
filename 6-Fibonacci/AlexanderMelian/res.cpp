#include <bits/stdc++.h>


using namespace std;

int main(){
  long long a,b,c,n,i;
  cin >> n;
  if(n == 0){
  cout << 0  << endl;
  }else if(n == 1 || n == 2){
  cout << 1 << endl;
  }else{
  a = 0;
  b = 1;
  c = a+b;
  for(i = 2; i < n ; i++){
    a = b;
    b = c;
    c = a+b;
  }
  cout << c << endl;
  }
}
