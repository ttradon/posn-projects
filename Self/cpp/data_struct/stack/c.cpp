#include <bits/stdc++.h>
using namespace std;

int main(){
    stack<int> s;
    s.push(10);
    s.push(5);
    s.push(7);
    while(!s.empty()){
        cout<< s.top()<< " ";
        s.pop();
    }
    return 0;
}