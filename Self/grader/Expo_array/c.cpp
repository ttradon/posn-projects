#include <bits/stdc++.h>
using namespace std;

int power(int base, int expo) {
    int result = 1;
    for(int i=0; i<expo; i++){
        result *= base;
    }
    return result;
}

int main(){
    int n;
    cin>>n;
    vector<pair<int, int>> nums(n);
    
    for(int i=0; i<n; i++){
        cin>>nums[i].first;
    }
    for(int i=0; i<n; i++){
        cin>>nums[i].second;
    }
    for(int i=0; i<n; i++){
        cout<< power(nums[i].second, nums[i].first)<< " ";
    }
    return 0;
}