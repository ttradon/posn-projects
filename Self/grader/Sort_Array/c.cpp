#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>> arr(m,vector<int>(n));

    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            int x;
            cin>> arr[i][j];
        }
    }

    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if(i % 2 == 0){
                sort(arr[i].begin(), arr[i].end());
            } else{
                sort(arr[i].begin(), arr[i].end(), greater<int>());
            }
        }
    }

    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            int x;
            cout<< arr[i][j]<< " ";
        }
        cout<<endl;
    }
    return 0;
}