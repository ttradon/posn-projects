#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> nums;
    string c;
    int n=3;
    while(n--){
        int x;
        cin>>x;
        nums.push_back(x);
    }
    cin>>c;
    sort(nums.begin(),nums.end());
    auto it1 = nums.begin();
    auto it2 = nums.begin()+1;
    auto it3 = nums.begin()+2;
    for(int i=0; i<3; i++){
        if(c[i] == 'A') cout<< *it1;
        else if(c[i] == 'B') cout<< *it2;
        else cout<< *it3;
        cout<< " ";
    }
    return 0;
}