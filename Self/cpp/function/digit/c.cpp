#include <bits/stdc++.h>
using namespace std;

int main(){
    string nums = "10230123";
    for(int i=0; i<nums.length(); i++){
        int n = nums[i] - '0';
        cout<<n<< " ";
    }
    return 0;
}