#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a,b,c;
    cin>>a>>b>>c;

    if(a==b && a ==c && b == c) cout<<"equilateral";
    else if (a==b || b==c || a==c) cout<<"isosceles";
    else cout<<"scalene";
    return 0;
}