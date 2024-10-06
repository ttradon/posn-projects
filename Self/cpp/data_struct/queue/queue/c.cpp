#include <bits/stdc++.h>
using namespace std;

int main(){
    queue<int> q;
    q.push(5);
    q.push(10);
    q.push(56);
    while(!q.empty()){
        cout<< q.front()<< " ";
        q.pop();
    }
    cout<<endl;
    cout<< q.size();
    return 0;
}