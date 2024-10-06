#include <bits/stdc++.h>
using namespace std;

int factorial(int n){
    if(n==0) return 1; //base case
    return n*factorial(n-1); //recursion
}

int main(){
    int n;
    cin>> n;
    cout<< factorial(n);
    return 0;
}