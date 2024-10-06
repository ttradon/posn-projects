#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,nums,max,min;
    cin>>n;
    for(int i=0; i<n; i++){
        if(i==0){
            cin>>nums;
            max = nums;
            min = nums;
        }
        cin>>nums;
        if(nums > max){
            max = nums;
        }
        if(nums < min){
            min = nums;
        }
    }
    cout<< max<< " "<< min;
    return 0;
}

/*int main(){
    int n, x;
    vector<int> nums;
    cin>>n;
    while(n--){
        cin>>x;
        nums.push_back(x);
    }
    cout<< *max_element(nums.begin(), nums.end());
    cout<< " ";
    cout<< *min_element(nums.begin(), nums.end());
    return 0;
}*/