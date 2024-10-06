#include <bits/stdc++.h>
using namespace std;

int main(){
  int k;
  int n;
  cin>>k;
  cin>>n;

  if(k<n) cout<< k;
  if(k%n == 0) cout<< n;
  else if(k%n != 0) cout<< k%n;
  return 0;
}