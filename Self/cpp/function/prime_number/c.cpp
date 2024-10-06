#include <bits/stdc++.h>
using namespace std;

bool prime_check(int n){
    if(n<= 1) return false;
    for(int i =2; i<n; i++){
        if(n%i == 0) return false;
    }
    return true;
}

int main(){
    int nums;
    cin>>nums;
    prime_check(nums) ? cout<<"true" : cout<<"false";
    return 0;
}