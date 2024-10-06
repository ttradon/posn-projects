#include <bits/stdc++.h>
using namespace std;

/* int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int arr[5][4];
    int max=0,num;
    for(int i=0; i<5; i++){
        for(int j=0; j<4; j++){
            cin>>arr[i][j];
        }
    }

    for(int i=0; i<5; i++){
        int total=0;
        for(int j=0; j<4; j++){
            total += arr[i][j];
        }
        if(total > max){
            max = total;
            num = i+1;
        }
    }

    cout<<num<< " "<<max;
    return 0;
} */

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    vector<pair<int,int>> arr;
    int score;

    for(int i=0; i<5; i++){
        int sum=0;
        for(int j=0; j<4; j++){
            cin>> score;
            sum+=score;
        }
        arr.push_back({sum,i+1});
    }
    sort(arr.begin(),arr.end());
    auto it = arr.end()-1;
    cout<< it->second<< " "<< it->first;
    return 0;
}