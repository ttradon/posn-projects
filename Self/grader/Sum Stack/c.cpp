#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n,m;
    cin>>n;
    vector<int> num1(n);
    for(auto &i : num1){
        cin>>i;
    }
    cin>>m;
    vector<int> num2(m);
    for(auto &i : num2){
        cin>>i;
    }

    if(num1.size() == num2.size()){
        for(int i=0; i<num1.size(); i++){
            cout<<num1[i] + num2[i]<< " ";
        }
    }// 0 1 2 3

    if(num1.size() > num2.size()){
        for(int i=0; i<num2.size(); i++){
            cout<<num1[num1.size()/2+i] + num2[i]<< " ";
        }
    }

    if(num1.size() < num2.size()){
        for(int i=0; i<num1.size(); i++){
            cout<<num2[num2.size()/2+i] + num1[i]<< " ";
        }
    }
    return 0;
}